#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long int n, m;
	std::cin >> n >> m;

	std::cout << n / m << "\n" << n % m;

}
