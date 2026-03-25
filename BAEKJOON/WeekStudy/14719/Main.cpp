#include <iostream> 

int blockHeight[501];
int H, W;

int ResearchWater(int height)
{
	int first = -1;	//first는 처음 으로 height이 높이가 등장한 곳 만약 웅덩이가 1개이상이면 end값을 first로 최신화 필요
	int water = 0;
	for (int i = 0; i < W; i++)
	{
		if (blockHeight[i] >= height)
		{
			if (first != -1)
				water += i - first - 1;
			first = i;
		}
	}
	return water;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int water = 0;
	std::cin >> H >> W;



	for (int i = 0; i < W; i++)
	{
		std::cin >> blockHeight[i];
	}

	for (int i = H; i > 0; i--)	//여기서 i는 높이
	{
		water += ResearchWater(i); // i높이의 블록 없애기
	}


	std::cout << water;
}

//left랑 right해서 둘중 큰 값을 비교해서 하기