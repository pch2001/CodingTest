#include <iostream>
#include <vector>

void Eratps(std::vector<int>& arr, int N)
{
	std::vector<bool> checkPrime(N+1, true);

	for (int i = 2; i*i <= N; i++)
	{
		if (checkPrime[i])
		{
			for (int j =  i* i; j <= N; j += i)
			{
				checkPrime[j] = false;
			}
		}
	}
	for (int i = 2; i <= N; i++)
	{
		if(checkPrime[i])
		{
			arr.emplace_back(i);
		}
	}

}


int main()
{
	int N;
	std::cin >> N;

	std::vector<int> sosu;

	Eratps(sosu,N);

	int left = 0, right = 0, sum = 0;
	int answer = 0;

	while (1)
	{
		if (sum > N)
		{
			sum -= sosu[left++];
		}
		else if (right == sosu.size())
			break;
		else
			sum += sosu[right++];

		if (sum == N)
			answer++;
	}

	std::cout << answer;
}