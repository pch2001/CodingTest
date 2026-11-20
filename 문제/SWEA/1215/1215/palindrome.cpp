#include <iostream>

int solve(char arr[8][8], int len)
{
	int count = 0;
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y <= 8 - len; y++)
		{
			bool isPalindrome = true;
			for (int k = 0; k < len / 2; k++)
			{
				if (arr[x][y + k] != arr[x][y + len - 1 - k])
				{
					isPalindrome = false;
					break;
				}
			}
			if (isPalindrome)
				count++;
		}
	}
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x <= 8 - len; x++)
		{
			bool isPalindrome = true;
			for (int k = 0; k < len / 2; k++)
			{
				if (arr[x + k][y] != arr[x + len - 1 - k][y])
				{
					isPalindrome = false;
					break;
				}
			}
			if (isPalindrome)
				count++;
		}
	}
	return count;
}

int main()
{
	for (int t = 0; t<10; t++)
	{
		int len;
		std::cin >> len;

		char arr[8][8];

		for (int x = 0; x < 8; x++)
		{
			for (int y = 0; y < 8; y++)
			{
				std::cin >> arr[x][y];
			}
		}

		std::cout << "#" << t + 1 << " ";
		std::cout << solve(arr, len) << std::endl;
	}
}