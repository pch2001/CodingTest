#include <iostream>
#include <vector>

int solve(std::vector<std::vector<int>> farm, int N)
{

}


int main()
{
	int T;
	std::cin >> T;

	int N;
	for(int i =0; i<T; i++)
	{
		std::cin >> N;
		std::vector<std::vector<int>> farm(N, std::vector<int>(0));
		for (int x = 0; x < N; x++)
		{
			for (int y = 0; y < N; y++)
			{
				std::cin >> farm[x][y];
			}
		}

		solve(farm, N);

		std::cout << "#" << i + 1 << " ";
	}
}