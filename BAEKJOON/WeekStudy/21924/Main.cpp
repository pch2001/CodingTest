#include <iostream>
#include <vector>
#include <algorithm>

int N, M;

int find(int findnumber, std::vector<int>& parent)
{
	if (findnumber == parent[findnumber])
		return findnumber;
	return parent[findnumber] = find(parent[findnumber], parent);
}

void uni(int a, int b, std::vector<int>& parent)
{
	if (a != b)
	{
		parent[b] = a;
	}

}

void mstStart(const std::vector<std::pair < int, std::pair<int, int> > >& path, int max, std::vector<int>& parent)
{
	int start;
	int end;
	int weight;

	int count = 0;
	int Totalweight = 0;

	for (int i = 0; i < path.size(); i++)
	{

		start = path[i].second.first;
		end = path[i].second.second;
		weight = path[i].first;

		start = find(start,parent);
		end = find(end, parent);

		if (start != end)
		{
			Totalweight += weight;
			count++;
			uni(start, end, parent);
		}
	}

	if (count == N- 1)
	{
		std::cout << max - Totalweight;
	}
	else 
	{
		std::cout << -1;

	}
	
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> N >> M;

	std::vector<int> parent(N + 1);
	std::vector<std::pair < int, std::pair<int, int> > > path;

	int a, b, c;
	long long Maxdistance = 0;

	for (int i = 0; i < M; i++)
	{
		std::cin >> a >> b >> c;
		path.emplace_back(std::make_pair(c,std::make_pair(a,b)));
		Maxdistance += c;
	}

	for (int i = 0; i < N + 1; i++)
	{
		parent[i] = i;
	}

	std::sort(path.begin(), path.end(), [](const auto& a, const auto& b){ return a.first < b.first; } );

	mstStart(path, Maxdistance, parent);

	return 0;
}