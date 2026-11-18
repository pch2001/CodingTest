#include <iostream> //1244


// 남학생 - 스위치 번호가 받은 수의 배수 -> change
// 여학생 - 받은 수와 같은 번호가 붙은 스위치를 중심으로 좌우가 대칭이면 가장 많은 스위치를 포함하는 구한  change
int switchState[101];
int switchCount;

void switchnumberChange(int idx)
{
	if (switchState[idx] == 0)
		switchState[idx] = 1;
	else
		switchState[idx] = 0;
}

void girl(int switchnumer)
{
	switchnumberChange(switchnumer);
	int L = switchnumer - 1;
	int R = switchnumer + 1;
	while (R <= switchCount && L >= 1)
	{
		if (switchState[L] == switchState[R])
		{
			switchnumberChange(L);
			switchnumberChange(R);
		}
		else
			break;

		L--;
		R++;
	}
}

void boy(int switchnumber)
{
	int tempnumber = switchnumber;
	while (tempnumber <= switchCount)
	{
		switchnumberChange(tempnumber);
		tempnumber += switchnumber;
	}
}


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);


	std::cin >> switchCount;
	for (int i = 1; i <= switchCount; i++)
	{
		std::cin >> switchState[i];
	}

	int studentCount;
	std::cin >> studentCount;

	int sex, switchnumber;
	while (studentCount)
	{
		std::cin >> sex >> switchnumber;

		if (sex == 1)
			boy(switchnumber);
		else if (sex == 2)
			girl(switchnumber);


		/*for (int i = 1; i <= switchCount; i++)
		{
			std::cout << switchState[i] << " ";
		}
		std::cout << "\n";*/
		studentCount--;
	}

	for (int i = 1; i <= switchCount; i++)
	{
		std::cout << switchState[i];

		if (i % 20 == 0)
		{
			std::cout << "\n";
		}
		else
		{
			std::cout << " ";
		}

	}
}


