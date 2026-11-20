#include <iostream>
#include <vector>
/*
N개의 숫자로 구성된 Ai(1<=i<=N)와 M개의 숫자로 구성된 Bj(1<=j<=M)

*/
int N, M;

int solve(std::vector<int>& A, std::vector<int>& B)
{
	int max = 0;
	int sum = 0;
	for (int i = 0; i < B.size() - A.size() + 1; i++)
	{
		sum = 0;
		for (int j = 0; j < A.size(); j++)
		{
			sum += A[j] * B[i + j];
		}
		if (sum > max)
		{
			max = sum;
		}
	}
	return max;
}

int main()
{
	int T;
	std::cin >> T;
	std::vector<int> A, B;

	for (int i = 1; i <= T; ++i)	
	{
		std::cin >> N >> M;
		A.resize(N);
		B.resize(M);

		for(int i = 0; i < N; ++i)
		{
			std::cin >> A[i];
		}
		for(int i = 0; i < M; ++i)
		{
			std::cin >> B[i];
		}

		std::cout << "#" << i << " ";
		if (N > M)
		{
			std::cout << solve(B, A) << "\n";
		}
		else
		{
			std::cout << solve(A, B) << "\n";
		}

	}
}