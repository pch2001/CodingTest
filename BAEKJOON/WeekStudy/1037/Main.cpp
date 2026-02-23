#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int count;
	std::cin >> count;
	std::vector<int> arr(count);

	for (int i = 0; i < count; i++)
		std::cin >> arr[i];

	sort(arr.begin(), arr.end());

	std::cout << arr.front()*arr.back();
}
