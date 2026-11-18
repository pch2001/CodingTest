#include <iostream>

int findnumber(int x)
{
	int count = 0;
	while (x > 0)
	{
		if (x % 2 == 1)
			count++;
		x /= 2;
	}
	return count;
}

int main()
{
	int x;
	std::cin >> x;


	std::cout <<findnumber(x);

}