#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> vec(31,0);
	int number;

	for (int i = 1; i <= 28; i++) {
		cin >> number;
		vec[number] = 1;
	}
	for (int i = 1; i <= 30; ++i) {
		if (vec[i] == 0) {
			cout << i << endl;
		}
	}
}