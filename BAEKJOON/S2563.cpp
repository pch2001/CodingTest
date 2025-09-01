#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int papper[101][101] = { 0, };
	for (int i = 0; i < num; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = x; j < x + 10;j++) {
			for (int k = y; k < y + 10; k++) {
				papper[j][k] = 1;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			answer += papper[i][j];
		}
	}
	cout << answer;

}