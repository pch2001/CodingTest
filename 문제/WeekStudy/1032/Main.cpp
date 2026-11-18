#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	

	int N;
	std::cin >> N;
	std::string* words = new std::string[N];

	std::cin >> words[0];

	for(int i=1; i<N; i++)
	{
		std::cin >> words[i];
	}
	
	std::string answer = words[0];

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < answer.size(); j++)
		{
			if (words[0][j] != words[i][j])
				answer[j] = '?';
		}
		
		
	}


	delete[] words;

	std::cout << answer;

}