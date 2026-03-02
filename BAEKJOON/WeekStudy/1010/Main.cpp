#include <iostream>

long long factorial(int N, int M)
{
	if (N > M - N)
		N = M - N; 

	long long answer = 1;

	for (int i = 0; i < N; i++)
	{
		answer *= (M - i);
		answer /= (i + 1);
	}

	return answer;
}

int main()
{
	int T;
	std::cin >> T;
	while (T--)
	{
		int N, M;
		std::cin >> N >> M;
		
		std::cout << factorial(N,M)<<"\n";
	}
}