#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main() {

	int chess[6] = {1,1,2,2,2,8};
	int have;

	for (int i = 0; i <= 5; i++) {
		cin >> have;
		cout << chess[i] - have << " ";
	}
}