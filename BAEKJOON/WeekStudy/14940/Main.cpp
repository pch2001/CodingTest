#include <iostream>
#include <queue>
#include <vector>


int map[1002][1002] = { 0 };
int dist[1002][1002] = { 0 };
int n, m;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void findPath(int x, int y, int depth)
{
	if (x >= n || y >= m) return;
	if (!map[y][x]) return;

	map[y][x] += depth;

	findPath(x + 1, y, depth);
	findPath(x - 1, y, depth);
	findPath(x, y + 1, depth);
	findPath(x, y - 1, depth);

}


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::cin >> n >> m;

	std::queue<std::pair<int, int>> q;
	int startX=0, startY=0;

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			std::cin >> map[y][x];
			dist[y][x] = -1;
			if (map[y][x] == 2)
			{
				startX = x;
				startY = y;
			}
		}
	}

	std::cout << startX<<"\n";
	std::cout << startY<<"\n";

	q.push({ startY, startX });
	dist[startY][startX] = 0;


	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx < 0 || ny < 0 || nx >= m || ny >= n)
				continue;

			if (map[ny][nx] == 0)
				continue;

			if (dist[ny][nx] != -1)
				continue;
			dist[ny][nx] = dist[y][x] + 1;
			q.push({ ny, nx });
		}

	}

	//findPath(startX, startY, 0);

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			if (map[y][x] == 0)
				std::cout << 0 << " ";
			else
				std::cout << dist[y][x] << " ";
		}
		std::cout << "\n";
	}
}