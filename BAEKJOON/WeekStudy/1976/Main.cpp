#include <iostream>

int N, M; // N: 도시 수, M:  가야되는 도시 수
int path[1001];

int find(int x)
{
	if (path[x] == x)
		return x;
	else
		return path[x] = find(path[x]);
}

void uni(int a, int b)
{
	a = find(a);
	b = find(b);
	if (a != b)
		path[a] = b;
}


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> N >> M;	

	for (int i = 1; i <= N; i++)
		path[i] = i;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int x;
			std::cin >> x;
			if (x == 1)
				uni(i, j);
		}
	}

	int first;
	std::cin >> first;
	int root = find(first);

	for (int i = 1; i < M; i++)
	{
		int next;
		std::cin >> next;
		if (find(next) != root)
		{
			std::cout << "NO\n";
			return 0;
		}
	}
	std::cout << "YES\n";

}