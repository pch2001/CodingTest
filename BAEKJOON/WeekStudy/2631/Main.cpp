#include <iostream>

int line[200];
int dp[200];

int lineStart(int idx)
{

}

int main()
{
	int N;
	int answer = 999999;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> line[i];
	}
	
	for (int i = 0; i < N; ++i)
	{
		dp[0] = lineStart(i);
	}

}