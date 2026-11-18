#include <iostream>

char ground[51][51];
int count[51][51];

std::string WB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
};
std::string BW[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
};


int WB_cnt(int x, int y)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (ground[x + i][y + j] != WB[i][j])
				cnt++;
		}

	}
	return cnt;
}
int BW_cnt(int x, int y)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (ground[x + i][y + j] != BW[i][j])
				cnt++;
		}

	}
	return cnt;
}

int main()
{
	int M, N, answer = 9999;
	std::cin >> N >> M;

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < M; y++)
		{
			std::cin >> ground[x][y];
		}
	}

	for (int i = 0; i + 8 <= N; i++)
	{
		for (int j = 0; j + 8 <= M; j++)
		{
			int tmp;
			tmp = std::min(WB_cnt(i, j), BW_cnt(i, j));
			if (tmp < answer) {
				answer = tmp;
			}
		}
	}

	std::cout << answer;

}