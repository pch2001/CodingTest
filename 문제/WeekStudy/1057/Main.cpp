#include <iostream>

int main()
{
	int N, Kim, Lim, count = 0;


	std::cin >> N >> Kim >> Lim;

	while (Kim != Lim)
	{
		Kim = (Kim + 1) / 2;
		Lim = (Lim + 1) / 2;
		count++;
	}

	if (count == 0)
		std::cout << -1;
	else
		std::cout << count;
	//16명 
	//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
	// 1   2   3   4   5     6     7     8	=>8개
	//	 1		 2		  3			  4		=>4개
	//		 1					2			=>2개
	//					1					=>1개
										//	15개


}