#include <iostream>
#include <vector>
#include <algorithm>

//#define long long;


int find(std::vector<int>& parent, int start)
{
	if (parent[start] == start)
		return start;
	return parent[start] = find(parent, parent[start]);
}

void uni(std::vector<int>& parent,int start, int end)
{			//이어주기
	if (start != end)
	{
		parent[end] = start;
	}

}

void StartMST(std::vector<int>& parent, const std::vector<std::pair<std::pair<int, int>, int>>& arr)
{
	long long totalWeight = 0;

	int start = 0;
	int end = 0;
	int weight = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		start = arr[i].first.first;
		end = arr[i].first.second;
		weight = arr[i].second;

		start = find(parent, start);
		end = find(parent, end);
		if (start != end)
		{
			uni(parent, start, end);
			totalWeight += weight;
		} 
	}
	std::cout << totalWeight;
}

int main()
{
	int V, E;
	int a, b, c;
	std::cin >> V >> E;

	std::vector<std::pair<std::pair<int,int>, int>> arr;

	for (int i = 0; i < E; i++)
	{
		std::cin >> a >> b >> c;
		arr.emplace_back(std::make_pair(a,b),c);
	}


	std::sort(arr.begin(), arr.end(), [](auto& a, auto& b) {
		return a.second < b.second;
	});

	std::vector<int> parent(V +1);

	for (int i = 0; i < V + 1; i++)
	{
		parent[i] = i;
	}

	
	StartMST(parent, arr);


}