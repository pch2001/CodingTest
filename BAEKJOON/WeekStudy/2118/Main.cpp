#include <iostream>

int dis[500002];

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, total=0;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> dis[i];
		total += dis[i];
	}
	int answer = 0;
	int half = total / 2;

	int s = 0, e = 0;
	int currentdistance = 0;
	while (s < N)
	{
		while (e < s + N && currentdistance + dis[e % N] <= half)
		{
			currentdistance += dis[e % N];
			e++;
		}
		answer = std::max(answer, currentdistance);
		currentdistance -= dis[s];
		s++;
	}
	std::cout << answer;

}