#include <iostream>
#include <vector>

/*
N - 현재 일차
K - 타임머신의 최대 사용 횟수
타임머신의 전원 공급 정보를 담은 수열 A, 1일 떄만 사용 가능 

이게 키 포인트가 뒤로 돌아갈 수 있는 회수는 K 횟수로 정해져있고
돌아간다고 해도 거기가 에너지가 1이 아니면 안된다.

N일에서 K개를 나눈다음 그 위치로 간다 그 위치로 가는데 
*/

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, K;
	std::cin >> N >> K;
	std::vector<int> energy(N);

	for (int i = 0; i < N; i++)
	{
		std::cin >> energy[i];
	}

	int T = 0;

	for (int i = 0; i < K; i++)
	{
		auto it = std::lower_bound(energy.begin(), energy.end(), 1);
		std::cout << *it;
	}

	std::cout << T;
	


	return 0;
}