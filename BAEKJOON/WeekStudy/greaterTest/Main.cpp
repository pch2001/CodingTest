//#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec = { 5, 3, 8, 1, 4 };
	std::sort(vec.begin(), vec.end(), std::less<>());

	for (int n : vec)
	{
		std::cout << n << " ";
	}
	std::cout <<"\n";
	std::sort(vec.begin(), vec.end(), std::greater<>());

	for (int n : vec)
	{
		std::cout << n << " ";
	}
	std::cout << "\n";

	//std::greater<>와 std::less<> 직접 사용
	int a = 6, b = 2;
	std::greater<int> greaterFunc;
	std::less<int> lessFunc;

	std::cout << greaterFunc(a, b) << "\n";
	std::cout << lessFunc(a, b) << "\n";

	
}