#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

int main() {

	std::stack <int> savestack;
	std::vector <char> answer;

	int n; 
	std::cin >> n;

	std::vector <int> input(n);

	int temp, number=1;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;

		if (!savestack.empty() && savestack.top() == temp)
		{
			savestack.pop();
			answer.emplace_back('-');
		}
		else if (number <= temp)
		{
			while (number <= temp)
			{
				savestack.push(number++);
				answer.emplace_back('+');
			}
			savestack.pop();
			answer.emplace_back('-');
		}
		else if (!savestack.empty() && savestack.top() > temp)
		{
			std::cout << "NO";
			return 0;
		}


	}

	

	for (auto word : answer) {
		std::cout << word << "\n";
	}
	return 0;

}