#include<iostream>
#include<queue>
#include<algorithm>

std::pair <int, int> arr[100001];
std::priority_queue<int, std::vector<int>, std::greater<int>> pq;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int idx, N, room = 0;
	
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> idx >> arr[i].first >> arr[i].second;
	}
	std::sort(arr, arr + N);

	for (int i = 0; i < N; i++)
	{
		if (!pq.empty())
		{
			if (pq.top() > arr[i].first)
				room++;
			else
				pq.pop();
		}
		else
			room++;
		pq.push(arr[i].second);

	}
	std::cout << room;

}