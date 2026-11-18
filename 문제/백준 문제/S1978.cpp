#include <iostream>
using namespace std;

int main() {
	int num, count, answer=0;
	cin >> count;
	bool isdiv;
	for (int i = 0; i < count; i++) {
		cin >> num;
		if (num == 1) continue;
		isdiv = false;
		for (int j = 2; j < num; j++) {
			if (num % j == 0)
				isdiv = true;
		}

		if (!isdiv)
			answer++;
	}
	cout << answer;
}