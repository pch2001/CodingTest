#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int N=1;
	std::cin >> N;

	std::vector<int> solution(N);
	
	for (int i = 0; i < N; i++) 
		std::cin >> solution[i];

	long long minValue = 2000000002;
	std::pair<int, int> answer;

	for (int i = 0; i < N - 1; i++)
	{
		int target = - solution[i];
		auto it = std::lower_bound(solution.begin() + i + 1, solution.end(), target);
		//std::cout << *it << " ";
		if (it != solution.end())
		{
			long long sum = (long long)solution[i] + *it;
			if (abs(sum) <= minValue)
			{
				minValue = abs(sum);
				answer = {solution[i], *it};
			}
		}

		if (it != solution.begin()+i+1)
		{
			auto prev = std::prev(it);
			long long sum = (long long)solution[i] + *prev;
			if (abs(sum) <= minValue)
			{
				minValue = abs(sum);
				answer = { solution[i], *prev };
			}
		}
	}
	std::cout << answer.first << " " << answer.second;

	return 0;
}






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