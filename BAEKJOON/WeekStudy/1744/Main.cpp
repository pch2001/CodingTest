// �Է� ���� ���ڸ� sort�� �����ϰ�
// �� �ڿ� ���� ����ϱ�

#include <iostream>
#include <queue>
#include <algorithm>



std::pair <int, int> arr[51];
std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i].first;
		pq.push(arr[i].first);
		//arr[i].second++;
	}
	std::sort(arr, arr + N);

	long long answer = 0;
	
	// ù���� ���ڶ� �ι�° ���ڶ� ���ؼ� �װſ����� ���̽� �����ֱ�
	// 1. ù��°�� �ι�°�� ���� ��� �н�

	while (pq.empty())
	{
		int temp = pq.top();
		pq.pop();

		for (int j = i; j >= 0; j--)
		{
			if (temp != pq.top())
			{
				temp
			}

		}

		std::cout << arr[i].first;
	}


}