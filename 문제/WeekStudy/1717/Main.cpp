#include <iostream>

int n, m;
int arr[1000001];


int isFind(int a)
{
	if (arr[a] == a)
	{
		return a;
	}
	else
	{
		return arr[a] = isFind(arr[a]);
	}
}


void isunion(int a, int b)
{
	a = isFind(a);
	b = isFind(b);

	arr[a] = b;

}


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);	

	std::cin >> n >> m;

	for (int i = 0; i <= n; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		if (a == 0)
		{
			isunion(b, c);
		}
		else
		{
			int findb = isFind(b);
			int findc = isFind(c);
			if(findb == findc)
				std::cout << "YES\n";
			else 
				std::cout << "NO\n";
			
		}
	}

}