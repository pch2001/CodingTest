#include <iostream>

int main()
{

	for (int i = 0; i < 10; i++)
	{
		int N, M;
		int t = 0;
		int answer = 1;
		std::cin >> t;
		std::cin >> N >> M;
		std::cout << "#" << t << " ";

		for (int i = 0; i < M; i++)
		{
			answer *= N;
		}

		std::cout << answer << std::endl;
	}


}