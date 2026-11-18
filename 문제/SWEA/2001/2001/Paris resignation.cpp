#include <vector>
#include <iostream>
/*
N x N  배열 안의 숫자는 해당 영역에 존재하는 파리의 개수를 의미한다.
M x M 크기의 파리채를 한 번 내리쳐 최대한 많은 파리를 죽이고자 한다.
죽은 파리의 개수를 구하라.
*/
int N, M;
int Max = 0;

int solve(std::vector<std::vector<int>>& arr, int N, int M)
{
	Max = 0;
	for (int i = 0; i <= N - M; i++)
	{
		for (int j = 0; j <= N - M; j++)
		{
			int sum = 0;
			for (int x = i; x < i + M; x++)
			{	
				for (int y = j; y < j + M; y++)
				{
					sum += arr[x][y];
				}
			}
			//std::cout << "sum: " << sum << std::endl;
			if (sum > Max)
			{
				Max = sum;
			}

		}
	}
	return Max;
}

void inputnumber()
{
	std::cin >> N >> M;

	std::vector<std::vector<int>> arr(N, std::vector<int>(N, 0));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	std::cout << solve(arr, N, M) << "\n";
}



int main()
{
	int T;
	std::cin >> T;

	for(int i = 0; i < T; i++)
	{
		std::cout << "#" << i + 1 << " ";
		inputnumber();
	}
	return 0;
}