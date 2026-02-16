#include <iostream>

int menuChoice(int* sushi, int k, int c)
{

}


int main()
{
	int N, d, k, c;
	std::cin >> N >> d >> k >> c;
	
	int* sushi = new int[N];

	while (N--)
	{
		std::cin >> sushi[N];
	}
	menuChoice(sushi, k, c);

}