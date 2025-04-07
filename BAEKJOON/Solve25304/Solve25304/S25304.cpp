#include<iostream>
using namespace std;

int main() {
	int money, kind, a, b;
	cin >> money >> kind;
	int hap=0;
	for (int i = 0; i < kind; i++) {
		cin >> a >> b;
		hap += a * b;
	}
	money == hap ? cout << "Yes" : cout << "No";
}