#include <iostream>

int Line[11] = {0};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, temp;
	std::cin >> N;

	
	for (int i = 1; i <= N; i++)
	{
		std::cin >> temp;
		int tempidx=1;
		for (int idx = 1; idx <= N; idx++)
		{
			if (Line[idx]==0) // 라인에 사람이 없을떄
			{
				if (temp == 0) //라인에 사람이 없는데 내가 알고있는 사람도 없을떄
				{
					Line[idx] = i;
					break;
				}
				temp--;
			}
			else //라인에 사람이 있을 때
			{
				continue;
			}	
		}
	}

	for (int i = 1; i <= N; i++)
	{
		std::cout << Line[i] << " ";
	}

}