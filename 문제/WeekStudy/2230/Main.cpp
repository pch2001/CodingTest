#include <iostream>	
#include <vector>
#include <algorithm>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> A(N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		std::cin >> temp; 
		A[i] = temp;
	}

	std::sort(A.begin(), A.end());

	int L = 0, R = 0;
	//int currentdif = 0;
	int minAnswer = 2000000001;

	while (L < N && R < N)
	{
		int currentdif = A[R] - A[L];
		if (currentdif >= M)
		{
			minAnswer = std::min(minAnswer, currentdif);
			L++;
		}
		else
		{
			R++;
		}
	}
	std::cout << minAnswer;
}