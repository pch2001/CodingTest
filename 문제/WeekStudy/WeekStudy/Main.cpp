#include <iostream>
#include <string>
// 컴퓨터 세팅

int main()
{
	int width = 5;
	int x = 5, y = 5;

	// 1. 하나로 합치기
	int linearIndex = (y * width) + x;

	std::cout << linearIndex << "\n";


	for (int i = 0; i < linearIndex; i++)
	{
		std::cout << i % width << ", " << i / width <<"\n";
	}


}