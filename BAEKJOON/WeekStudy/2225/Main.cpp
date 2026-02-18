#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, K;

	std::cin >> N >> K;

	std::vector<std::vector<int>> dp(N + 1, std::vector<int>(K + 1, 0));
	for (int i = 0; i <= N; ++i)
	{
		dp[i][1] = 1;
	}
	for (int i = 0; i <= K; ++i)
	{
		dp[0][i] = 1;
	}

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 2; j <= K; ++j)
		{
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
		}
	}

	std::cout << dp[N][K];
}