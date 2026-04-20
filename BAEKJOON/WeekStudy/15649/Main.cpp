#include <iostream>
#include <string>

// 

int N = 0, M= 0;
bool visitid[9] = { false, };

void print(int number, std::string txt)
{
	if (number == M+1)
	{
		std::cout << txt << "\n";

		return;
	}

	for (int i = 1; i < N + 1; i++)
	{
		//std::cout << txt << "\n";
		if (visitid[i])
			continue;

		visitid[i] = true;
		print(number+1, txt + std::to_string(i) + " ");
		visitid[i] = false;

	}
	
}

int main()
{
	std:: cin >> N >> M;

	print(1, "");

	std::cin.get();
}