#include <iostream>

int main()
{
	int N;
	std::string word;
	std::cin >> N >> word;

	int diffCount = 0;	//현재 윈도우 안에 있는 서로 다른 문자 개수
	int maxCount = 0;	//지금까지 찾은 가장 긴 부분 문자열 길이
	int currentCount[26] = { 0 };

	int l=0;

	//r을 오른쪽으로 한칸 씩 확장 슬라이딩 윈도우
	for (int r = 0; r < word.size(); r++)
	{
		int idx = word[r] - 'a';

		if (currentCount[idx] == 0)//이문자가 처음 등장하면 diffcount증가
			diffCount++;

		currentCount[idx]++;	//문자 개수에 등장했다고 추가해주기

		while (diffCount > N)	//허용된 문자보다 많아 진다면
		{
			int leftIndex = word[l] - 'a';	//제일 왼쪽 문자 값
			currentCount[leftIndex]--;		//제일 왼쪽 문자 제거

			if (currentCount[leftIndex] == 0)	//문자가 완전히 현재count에서 사라지면 차이값도 줄여주기
				diffCount--;

			l++;	//왼쪽값을 오른쪽으로 한칸 이동
		}

		maxCount = std::max(maxCount, r - l + 1);

	}
	

	std::cout << maxCount;
}