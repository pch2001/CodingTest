#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
int main()
{
	std::vector<int> length(3);
	while (1)
	{
		std::cin >> length[0] >> length[1] >> length[2];
		if (length[0] == 0)
			break;

		std::sort(length.begin(), length.end());

		if (length[0] * length[0] + length[1] * length[1] == length[2] * length[2])
			std::cout << "right" << "\n";
		else 
			std::cout << "wrong" << "\n";

	}
}