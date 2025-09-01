#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int line = 1;
	int sum = 0;
	while (sum + line < num) {
		sum += line;
		line++;
	}

	int pos = num - sum;
	int r, w;
	if (line % 2 == 0) {
		r = pos;
		w = line - pos + 1;
	}
	else {
		r = line - pos + 1;
		w = pos;

	}
	cout << r << "/" << w << endl;

}