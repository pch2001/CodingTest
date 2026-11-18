#include <iostream>

bool oneChance(std::string& str, int l, int r)
{
	while (l <= r)
	{
		if (str[l] == str[r])
		{
			l++; r--;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int returnmoon(std::string& str)
{
	int l = 0; int r = str.size() - 1;

	while (l<=r)
	{
		if (str[l] == str[r])
		{
			l++; r--;
		}
		else
		{
			if(oneChance(str, l +1, r) || oneChance(str, l, r-1))
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
	}

	return 0;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;
	while (N--)
	{
		std::string word;
		std::cin >> word;
		std::cout << returnmoon(word)<<"\n";
	}

}