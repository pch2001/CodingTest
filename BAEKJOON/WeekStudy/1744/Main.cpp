// 입력 받은 숫자를 sort로 정렬하고
// 맨 뒤에 부터 계산하기

#include <iostream>
#include <queue>
#include <algorithm>



std::pair <int, int> arr[51];
std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i].first;
		pq.push(arr[i].first);
		//arr[i].second++;
	}
	std::sort(arr, arr + N);

	long long answer = 0;
	
	// 첫번쨰 숫자랑 두번째 숫자랑 비교해서 그거에따라 케이스 나눠주기
	// 1. 첫번째랑 두번째랑 같을 경우 패스

	while (pq.empty())
	{
		int temp = pq.top();
		pq.pop();

		for (int j = i; j >= 0; j--)
		{
			if (temp != pq.top())
			{
				temp
			}

		}

		std::cout << arr[i].first;
	}


}