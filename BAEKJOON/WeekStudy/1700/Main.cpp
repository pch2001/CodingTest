#include <iostream>
#include <vector>

int main()
{
	int N, K;
	std::cin >> N >> K;
	std::vector<int> tab(N);
	std::vector<int> todo(K);

	for (int i = 0; i < K; i++)
	{
		std::cin >> todo[i];
	}

	for (int i = 0; i < N; i++)
	{
		std::cin >> tab[i];
	}

	int answer = 0;

	for (int i = N; i < K; i++)
	{
		for (int save : tab) // 1. 이미 할일이 콘센트에 꼽혀있는지 확인
		{
			if (save == todo[i])
				break;	// 변경 필요
		}
		// 2. 할일이 콘센트에 안 꼽혀 있다면 빼주기 여기서
		// 각자 뒤에 todo 끝까지 비교하면서 꽂혀있는게 있는지 확인
		// 꽃혀있는게 있으면 그 자리 값 가져와서 비교 해주기
		// 없으면 자동 패스
		int mintodo = 101;
		for (int j = i; j < K; j++)	//그럼 이걸 두해줘야 되는데?
		{
			for (int x = j + N; x < K; x++)
			{
				if (tab[j] == todo[x])
				{
					if (mintodo > x)
					{
						mintodo = x;
					}
				}
			}
		}
		

	}


}

