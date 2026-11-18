#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	std::ios::sync_with_stdio(false);	std::cin.tie(nullptr);

	int  M ;
	std::cin >> M;
	std::vector<float> scores;
	scores.resize(M);
	for (int i = 0; i < M; i++)
	{
		std::cin >> scores[i];
	}
	std::sort(scores.begin(), scores.end());

	double avg = 0;
	for (int i = 0; i < M; i++)
	{
		avg += scores[i]/scores[M - 1]*100;
	}
	std::cout << avg / M;
}