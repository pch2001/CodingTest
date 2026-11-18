#include <iostream>
#include <algorithm>
#include <queue>

int N;

std::pair<int, int> classTime[200001];
std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> N;
	for(int i =0 ; i< N; i++)
	{
		std::cin >> classTime[i].first >> classTime[i].second;
	}

	std::sort(classTime, classTime + N);
	int room = 1;
	pq.push(classTime[0].second);
	for (int i = 1; i < N; i++)
	{
		if (classTime[i].first >= pq.top())
		{
			pq.pop();
		}
		else
		{
			room++;
		}
		pq.push(classTime[i].second);

	}

	std::cout << room << "\n";
}