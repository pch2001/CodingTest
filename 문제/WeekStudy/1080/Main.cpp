#include <iostream>
#include <vector>


int A[52][52];
int B[52][52];


void ChangeMatrix(int x, int y)
{
	for (int iy = x; iy < x + 3; iy++)
	{
		for (int ix = y; ix < y + 3; ix++)
		{
			if (A[iy][ix] == 0)
				A[iy][ix] = 1;
			else
				A[iy][ix] = 0;
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, M;
	std::cin >> N >> M;


	for (int iy = 0; iy < N; iy++)
	{
		for (int ix = 0; ix < M; ix++)
		{
			char c;
			std::cin >> c;
			A[iy][ix] = c-'0';
		}
	}
	for (int iy = 0; iy < N; iy++)
	{
		for (int ix = 0; ix < M; ix++)
		{
			char c;
			std::cin >> c;
			B[iy][ix] = c - '0';
		}
	}

	int count = 0;
	for (int iy = 0; iy <= N-3; iy++)
	{
		for (int ix = 0; ix <= M-3; ix++)
		{
			if (A[iy][ix] != B[iy][ix])
			{
				ChangeMatrix(iy, ix);
				count++;
			}
		}
	}

	for (int iy = 0; iy < N; iy++) {
		for (int ix = 0; ix < M; ix++) {
			if (A[iy][ix] != B[iy][ix]) {
				std::cout << -1; 
				return 0;
			}
		}
	}

	std::cout << count;
}