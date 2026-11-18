#include <iostream>
#include <cmath>

int main()
{
	int N;
	std::cin >> N;

	int a, b;
	int temp;

	while (N--)
	{
		std::cin >> a >> b;
		a = a % 10;
		b = b % 4;
		if (b == 0)
			b = 4;

		temp = pow(a, b);

		if(temp==0)
			std::cout << 10 << "\n";
		else
			std::cout << temp%10 <<"\n";

	}


}