#include <iostream>
#include <vector>
#include <algorithm> // Ãß°¡

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::pair<int, int> answer;

	int N = 1;
	std::cin >> N;

	std::vector<int> solution(N);
	long long  minaanswer = 2000000000;

	for (int i = 0; i < N; i++)
	{
		std::cin >> solution[i];
	}


	int left = 0; int right = N - 1;
	long long temp = 0;
	while (left < right)
	{
		temp = solution[left] + solution[right];

		//std::cout << "(" << solution[left] << ", " << solution[right] << ") ->" << temp << " || ";

		if (abs(temp) <= minaanswer)
		{
			minaanswer = abs(temp);
			answer = { solution[left], solution[right] };
		}
		if (temp < 0)
			left++;
		else if (temp >= 0)
			right--;
	}

	std::cout << answer.first << " " << answer.second;


}