#include<iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
	string text;
	for (int i = 0; i < number/4; i++) {
		text += "long ";
	}
	cout << text << "int";
}