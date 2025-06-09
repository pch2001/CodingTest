#include<iostream>
#include<string>
using namespace std;

int main() {
	int num;
	cin >> num;

	int count=1;
	int Start = 1;
	while (Start <= num) {
		Start *= 6;
		count++;
	}
	cout << count;

}