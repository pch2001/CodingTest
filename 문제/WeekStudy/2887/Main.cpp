#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

/*
좌표로 3개의 수가 주어진다. -> 정렬을 할 필요는 ? -> 없을 거 같음
100,000개의 행성이 주어지는데 -> 1번에 행성으로 100,000행성까지 하나하나 비교하면서 거리값 구하기?
이거 다 비교하면 100,000번 수행 -> 시간 복잡도에 영향 X


*/
std::vector<std::pair<int, std::pair<int, int>>> coordinate(100001);


void mstStart(int N)
{
	int start, end, weightX;

	for (int i = 0; i < N-1; i++)
	{
		start = coordinate[i].first;
		//weightX = std::min(coordinate[i].first ,coordinate[i].second);
	}
}

int main()
{
	int N;
	std::cin >> N;

	int a, b, c;
	for (int i = 0; i < N; i++)
	{
		std::cin >> a >> b >> c;
		coordinate[i].first = a;
		coordinate[i].second.first = b;
		coordinate[i].second.second = c;
	}

	mstStart(N);

}