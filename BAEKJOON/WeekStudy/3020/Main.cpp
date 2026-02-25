#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, H;
	std::cin >> N >> H;

	int* bottom = new int[H + 1] {0};
	int* top = new int[H + 1] {0};

	for (int i = 0; i < N/2; i++)
	{
		int a, b;
		std::cin >> a >> b;
		bottom[a]++;
		top[b]++;
	}

	for (int i = H -1; i >= 1; --i)
	{
		bottom[i] += bottom[i + 1];
		top[i] += top[i + 1];
	}

	int min_Val = 99999;
	int count = 0;

	for (int i = 1; i <= H; i++)
	{
		int total = bottom[i] + top[H - i + 1];

		if (total < min_Val)
		{
			min_Val = total;
			count = 1;
		}
		else if (total == min_Val)
		{
			count++;
		}
	}
	std::cout << min_Val << " " << count;

}