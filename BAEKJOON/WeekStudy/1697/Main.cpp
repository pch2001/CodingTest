#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int N, K;
	int temp = 0;
	int timer = 0;
	bool serach[100001] = { false };
	queue<pair<int, int>> bfs;

	std::cin >> N >> K;
	bfs.push({N, 0});


	while (!bfs.empty())
	{
		
		temp = bfs.front().first;
		timer = bfs.front().second;
		bfs.pop();

		if (temp == K)
		{
			cout << timer;
			break;
		}
		//std::cout << temp << ", " << timer << "\n";
		if (serach[temp - 1] == false && temp - 1 >= 0 && temp - 1 < 100001)
		{
			bfs.push({ temp - 1, timer + 1 });
			serach[temp - 1] = true;
		}
		
		if (serach[temp + 1] == false && temp + 1 < 100001 && temp + 1 >= 0)
		{
			bfs.push({ temp + 1, timer + 1 });
			serach[temp + 1] = true;
		}
		
		if (serach[temp * 2] == false && temp *2 < 100001 && temp * 2 >= 0)
		{
			bfs.push({ temp * 2, timer+1 });
			serach[temp * 2] = true;
		}
	}
	//std::cin.get();
	//cout << timer;

	return 0;


}