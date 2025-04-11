#include<iostream>
#include<vector>
using namespace std;
int main() {
	int number;
	int answer[42] = {0,0,0,0,0,0,0,0,0,0,0};
	for (int i = 0; i < 10; i++) {
		cin >> number;
		answer[number%42] = 1;
	}
	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (answer[i] == 1) {
			count++;
		}
	}
	cout << count;
}
