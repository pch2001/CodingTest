#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	

	int N;
	std::cin >> N;
	std::string* words = new std::string[N];


	for(int i=0; i<N; i++)
	{
		std::cin >> words[i];
	}
	std::vector<char> c;

	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j < words[0].size(); j++)
		{
			c.emplace_back[words[i]];
		}

	}


	delete[] words;

}