#include <iostream>

int map[52][52];
int N, M;



int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> N >> M;

	for (int ix = 0; ix < N; ix++)
	{
		for (int jy = 0; jy < N; jy++)
		{
			std::cin >> map[ix][jy];
		}
	}



	for (int ix = 0; ix < N; ix++)
	{
		for (int jy = 0; jy < N; jy++)
		{
			std::cout << map[ix][jy] << " ";
		}
		std::cout << "\n";
	}

}