#include <iostream>
#include <vector>

void printsnail(const std::vector<std::vector<int>>& snail)
{
	for (const auto& row : snail)
	{
		for (const auto& col : row)
		{
			std::cout << col << " ";
		}
		std::cout << "\n";
	}
}

void draw(int N)
{
	std::vector<std::vector<int>> snail(N, std::vector<int>(N, 0));
	int x = 0, y = 0;

	int dir = 0;
	int dx = 0, dy = 1;

	for (int i = 0; i < N*N; i++)
	{
		snail[x][y] = i + 1;

	
		int tempx = x + dx;
		int tempy = y + dy;

		if(tempx < 0 || tempy < 0 || tempx >= N || tempy >= N || snail[tempx][tempy] != 0)
		{
			dir++;
			switch (dir % 4)
			{
			case 0:
				dx = 0;
				dy = 1;
				break;
			case 1:
				dx = 1;
				dy = 0;
				break;
			case 2:
				dx = 0;
				dy = -1;
				break;
			case 3:
				dx = -1;
				dy = 0;
				break;
			default:

				break;
			}

			tempx = x + dx;
			tempy = y + dy;
		}
		x = tempx;
		y = tempy;
	}
	printsnail(snail);
}



int main()
{
	int T, N;
	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::cin >> N;
		std::cout << "#" << i + 1 << "\n" ;
		draw(N);
	}

}