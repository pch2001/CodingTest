#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, Hap;
	std::cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	std::cin >> Hap;

	std::sort(arr, arr + N);

	int left = 0, right = N - 1;
	int answer = 0;

	while (left < right)
	{
		if (arr[left] + arr[right] == Hap)
		{
			answer++;
			right--;
			left++;
		}
		else if (arr[left] + arr[right] < Hap)
			left++;
		else
			right--;
	}

	std::cout << answer;

}