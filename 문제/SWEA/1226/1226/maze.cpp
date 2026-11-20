#include <iostream>
#include <vector>
#include <queue>

int search(int arr[16][16], int StartX, int StartY, int EndX, int EndY)
{
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };

	std::queue<std::pair<int,int>> q;
	q.push(std::make_pair(StartX, StartY));
	while (!q.empty())
	{
		int cur_x = q.front().first;
		int cur_y = q.front().second;

		q.pop();

		if(cur_x == EndX && cur_y == EndY)
		{
			return 1;
		}
		for (int i = 0; i < 4; i++)
		{
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if(next_x >= 0 && next_x < 16 && next_y >= 0 && next_y < 16)
			{
				if (arr[next_x][next_y] == 0 || arr[next_x][next_y] == 3)
				{
					q.push(std::make_pair(next_x, next_y));
					arr[next_x][next_y] = 1; 
				}
			}
		}
	}
	return 0;

}

int main()
{

	for (int t = 1; t <= 10; t++)
	{
		int T;
		std::cin >> T;

		int arr[16][16];

		int startX = 0, startY = 0;
		int EndX = 0, EndY = 0;

		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 16; j++)
			{
				char cell;
				std::cin >> cell;
				arr[i][j] = cell - '0';

				if (arr[i][j] == 2)
				{
					startX = i;
					startY = j;
				}
				else if (arr[i][j] == 3)
				{
					EndX = i;
					EndY = j;
				}
			}
		}
		int result = search(arr, startX, startY, EndX, EndY);
		std::cout << "#" << T << " " << result << std::endl;
	}
}