#include<iostream>
using namespace std;

int main() {
	int star;
	cin >> star;
	star--;
	for (int i = 0; i < star; i++) {
		for (int j = 0; j < star-i; j++) {
			cout << " ";
		}
		for (int x = 0; x < i; x++) {
			cout << "*";
		}
		cout << "*";
		for (int x = 0; x < i; x++) {
			cout << "*";
		}

		cout << endl;
	}
	for (int i = 0; i <= star; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int x = 0; x < star-i; x++) {
			cout << "*";
		}
		cout << "*";
		for (int x = 0; x < star-i; x++) {
			cout << "*";
		}
		cout << endl;
	}
}