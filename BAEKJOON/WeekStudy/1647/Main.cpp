#include <iostream>
#include <vector>
#include <algorithm>
// N개의 집 M개의 길
int TotalWeight = 0;

void uni(int a, int b, std::vector<int> parent)
{
	if(a != b)
		parent[a] = b;
}

int find(int a, std::vector<int> parent)
{
	
	if (a == parent[a])
		return a;
	else 
		parent[a] = find(parent[a], parent);

}


void mstStart(std::vector<std::pair<int, std::pair<int, int>>> path, std::vector<int> parent)
{
	int start;
	int end;
	int weight;

	for (int i = 0; i < path.size(); i++)
	{
		start = path[i].second.first;
		end = path[i].second.second;
		weight = path[i].first;

		start = find(start, parent);
		end = find(end, parent);

		if (start != end)
		{
			std::cout << weight << start << ", " << end << " " << "\n";
			uni(start, end, parent);
			TotalWeight += weight;
		}

	}


}

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<std::pair<int, std::pair<int, int>>> path(M);
	std::vector<int> parent(N+1);

	int a, b, c;

	for (int i = 0; i < M; i++)
	{
		std::cin >> a >> b >> c;
		
		path[i].first = c;
		path[i].second.first = a;
		path[i].second.second = b;
	}

	for (int i = 0; i < parent.size(); i++)
		parent[i] = i;

	std::sort(path.begin(), path.end());

	mstStart(path, parent);

	std::cout << TotalWeight;
}