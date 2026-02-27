#include <iostream>
#include <string>
int main()
{
	int a, b, c, d=10;
	std::cin >> a >> b >> c;

	std::cout << a + b - c << "\n";

	int temp = b;
	while (1)
	{
		temp = temp / 10;
		if (temp <= 0)
			break;
		d *= 10;
	}



	std::cout << (a * d) + b - c;


}