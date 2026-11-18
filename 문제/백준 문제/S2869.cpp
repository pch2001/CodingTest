#include <iostream>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;

	int length=0;
	int day = 1;
	day = (V - B - 1) / (A - B) + 1;
	cout << day;
}