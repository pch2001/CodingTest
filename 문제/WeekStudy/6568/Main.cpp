#include <iostream>
#include <vector>

std::vector<int> input(32);
int pcLine = 0;
int adder = 0;


int binToDec(std::string s)
{
	int val = 0;
	for (char c : s)
	{
		val = val * 2 + (c - '0');
	}
	return val;
}

int porgramStart(int pc)
{
	int command = pc/100000;

	switch (command)
	{
	case 0 :
		break;
	case 1 :
		break;
	case 10:
		break;
	case 11:
		break;
	case 100:
		break;
	case 101:
		break;
	case 110:
		break;
	case 111:
		break;
	default:
		break;
	}

	std::cout << command<<"\n";
	return 0;
}


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::vector<std::string> memory(32);

	for (int i = 0; i < 32; i++)
	{
		std::cin >> input[i];
	}
	for (int i = 0; i < 32; i++)
	{
		porgramStart(input[i]);
	}


}