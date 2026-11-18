#include <iostream> 

int blockHeight[501];
int H, W;

int ResearchWater(int height)	//목표 : height 높이 인 가로 없애주기
{
	int first = -1;	
	int water = 0;
	for (int i = 0; i < W; i++)
	{
		if (blockHeight[i] >= height)
		{
			if (first != -1)
				water += i - first - 1;
			first = i; //시작점 지정 + 리셋
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