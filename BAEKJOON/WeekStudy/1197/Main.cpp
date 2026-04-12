#include <iostream>

int V, E;
int parent[10001];

int Find(int x)
{
	if (parent[x] == x)
		return x;
	return parent[x] = Find(parent[x]);
}

int Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x != y)
		parent[x] = y;
}

int main()
{
	std::cin >> V >> E;
	for(int i = 0; i< V ; i++)
		path[i] = i;

	int i, j;

}