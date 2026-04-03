#include <iostream>
#include <string>
#include <queue>


int map[102][102] = {0, };
bool visited[102][102] = { false };
int distanced[102][102] = { };

int N, M;

int dirX[4] = { 0, 1, 0, -1 }; // ³²,µ¿,¼­,ºÏ
int dirY[4] = {1, 0, -1, 0};

int minMovecount = 9999999;

void bfs()
{
	std::queue<std::pair<int, int>> que;
	que.emplace(1,1);
	visited[1][1] = true;
	distanced[1][1] = 1;
	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextX = dirX[i] + x;
			int nextY = dirY[i] + y;

			if (nextX < 1 || nextY < 1 || nextX >N || nextY > M)
			{
				continue;
			}
			if (!visited[nextX][nextY])
			{
				if (map[nextX][nextY] == 1)
				{
					//std::cout << x << ", " << y << "\n";
					//std::cout << nextX << ", " << nextY<<"\n";
					//std::cout << "\n";
					visited[nextX][nextY] = true;
					que.emplace(nextX, nextY);
					distanced[nextX][nextY] = distanced[x][y] + 1;

					for (int i = 1; i <= N; i++)
					{
						for (int j = 1; j <= M; j++)
						{
							std::cout << distanced[i][j]<<" ";
						}
						std::cout << "\n";
					}
					std::cout << "\n" << "\n";

				}
			}


		}
	}


}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);


	std::cin >> N >> M;
	std::string temp;

	std::queue<int> arr;

	for (int y = 1; y <= N; y++)
	{
		std::cin >> temp;
		for (int x = 0; x < M; x++)
		{
			map[y][x+1] = temp[x] - '0';
		}
	}
	bfs();
	std::cout << distanced[N][M];

	return 0;
}