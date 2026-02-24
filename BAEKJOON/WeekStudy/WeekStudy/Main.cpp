#include <iostream>
#include <string>
int main()
{
	
	while (1)
	{
		std::string words;
		int answer = 0;
		getline(std::cin, words);
		if (words[0] == '#')
			break;
		for (int i = 0; i < words.size() - 1; i++)
		{
			if (words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] == 'u')
			{
					answer++;
			}
			if (words[i] == 'A' || words[i] == 'E' || words[i] == 'I' || words[i] == 'O' || words[i] == 'U')
			{
				answer++;
			}
		}

		std::cout << answer<<"\n";
	}

}