#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N;
	//int s, m, l, x, xxl, xxxl;
	int size[6];
	int T, P;

	std::cin >> N >> size[0] >> size[1] >> size[2] >> size[3] >> size[4] >> size[5] >> T >> P;

	int over = 0;
	for (int i = 0; i < 6; i++)
	{
		over += (size[i] + T - 1) / T;

	}
	std::cout << over << "\n";
	std::cout << N/P << " " << N % P;
	

}