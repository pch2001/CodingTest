#include <iostream>
#include <vector>

std::pair<int, int> Position = { 50,50 };

int map[100][100] = { 0 };

// 0: ³², 1: ¼­, 2: ºÏ, 3: µ¿
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };
int XminSize = Position.first;
int XmaxSize = Position.first;
int YminSize = Position.second;
int YmaxSize = Position.second;

int dir = 0;

void Direction(char next)
{
	if (next == 'R')
		dir = (dir + 1) % 4;
	else if (next == 'L')
	{
		dir = (dir + 3) % 4;
	}

}

void Go(char next)
{
	if (next == 'L' || next =='R')
	{
		Direction(next);
		return;
	}
	Position.first += dx[dir];
	Position.second += dy[dir];

	map[Position.first][Position.second] = 1;

	if (Position.first < XminSize)
		XminSize = Position.first;
	if (Position.first > XmaxSize)
		XmaxSize = Position.first;

	if (Position.second < YminSize)
		YminSize = Position.second;
	if (Position.second > YmaxSize)
		YmaxSize = Position.second;



}


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N;
	std::cin >> N;
	char next = ' ';

	map[Position.first][Position.second] = 1;
	while (N--)
	{
		std::cin >> next;
		Go(next);
	}
	
	for (int x = XminSize; x <= XmaxSize; x++)
	{
		for (int y = YminSize; y <= YmaxSize; y++)

		{
			if (map[x][y] == 0)
				std::cout << "#";
			else
				std::cout << ".";
		}
		std::cout << "\n";
	}

	

}