#include <iostream>
#include <vector>
int main()
{
	int N, d, k, c;
	std::cin >> N >> d >> k >> c;

	int* sushi = new int[N];

	for (int i = 0; i < N; i++)
	{
		std::cin >> sushi[i];
	}

	std::vector<int> eat(d + 1, 0);
	int cnt = 0;
	for (int i = 0; i < k; ++i)
	{
		if (eat[sushi[i]]++ == 0)
			cnt++;
	}

	if (eat[c]++ == 0)
	{
		cnt++;
	}


}