#include<iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
	for (int i = 1; i <= 9; i++) {
		cout << number << " * " << i << " = " << i * number << "\n";
	}
}