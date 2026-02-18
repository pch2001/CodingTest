#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N;
	std::cin >> N;

	std::vector<int> T(N+1), P(N+1);

	for (int i = 1; i <= N; i++)
		std::cin >> T[i] >> P[i];

	std::vector<int> dp(N + 1, 0);

	int max = 0;

	for (int i = N; i > 0; i--)
	{
		if (i + T[i] > N+1)
			dp[i] = 0;
		else
		{
			dp[i] = std::max(dp[i+1], P[i] + dp[i + T[i]]);
			if (max < dp[i])
				max = dp[i];
		}
	}

	std::cout << max;

}