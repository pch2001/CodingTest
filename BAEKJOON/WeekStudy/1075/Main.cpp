#include <iostream>

int main()
{
	int N, F;
	std::cin >> N >> F;

	
	N = (N / 100) * 100;


	for (int i = 0; i < 100; i++)
	{
		if ((N + i) % F == 0)
		{

			if (i < 10)
				std::cout << "0" << i;
			else
				std::cout << i;
			break;
		}
	}


}