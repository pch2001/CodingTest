#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	int a1 = stoi(a);
	int b1 = stoi(b);

	cout << (a1 > b1 ? a1:b1);

}