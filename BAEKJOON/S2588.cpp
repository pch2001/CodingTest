#include<iostream>
#include<string>
using namespace std;

int main() {
	int a;
	string b;
	cin >> a>> b;

	int num = b[2] - '0';
	int num2 = b[1] - '0';
	int num3 = b[0] - '0';
	cout << a * num  << endl;
	cout << a * num2 << endl;
	cout << a * num3 << endl;
	cout << a * stoi(b) << endl;
}