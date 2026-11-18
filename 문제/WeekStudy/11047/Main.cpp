#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, K;
	std::cin >> N >> K;
	std::vector<int> money(N);

	for (int i = 0; i<N; i++)
	{
		std::cin >> money[i];
	}

	int count = 0;

	for (int i = N - 1; i >= 0; i--)
	{
		count += K / money[i];
		K %= money[i];
	}
	std::cout << count;
}