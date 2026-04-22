#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
std::vector<std::vector<char>> alphbat(401);
bool Visit[26];
int R = 0, C = 0;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int max = 0;


void DFS(int x, int y, int Cnt)
{
	max = std::max(max, Cnt);

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < R && ny < C)
		{
			if (Visit[alphbat[nx][ny] - 'A'] == false)
			{
				Visit[alphbat[nx][ny] - 'A'] = true;
				DFS(nx, ny, Cnt + 1);
				Visit[alphbat[nx][ny] - 'A'] = false;
			}
		}
	}
}

void find()
{
	Visit[alphbat[0][0] - 'A'] = true;
	DFS(0, 0, 1);	
	std::cout << max;
}

int main()
{
	std::cin >> R >> C;
	
	char a;

	for (int y = 0; y < R; y++)
	{
		for (int x = 0; x < C; x++)
		{
			std::cin >> a;
			alphbat[y].emplace_back(a);
		}
	}

	find();


	//for (int y = 0; y < R; y++)
	//{
	//	for (int x = 0; x < C; x++)
	//	{
	//		std::cout << alphbat[y][x];
	//	}
	//	std::cout << "\n";
	//}
}