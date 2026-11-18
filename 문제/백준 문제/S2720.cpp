#include<iostream>
#include<string>
using namespace std;

int main() {
	int num=0, money, plus;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> money;
		int answer[4] = { 0, };

		if (money / 25 > 0) {
			answer[0] = money / 25;
			money = money % 25;
		}
		if (money / 10 > 0) {
			answer[1] = money / 10;
			money = money % 10;

		}
		if (money / 5>0) {
			answer[2] = money / 5;
			money = money % 5;

		}
		if (money != 0) {
			answer[3] = money;

		}
		for (int i : answer) {
			cout << i << " ";
		}
		cout << endl;
	}


}