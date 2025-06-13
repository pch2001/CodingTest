#include <iostream>
#include <vector>
using namespace std;

int main() {
	int p, q;
	cin >> p >> q;

	int min = 99;
	bool isno = true;
	vector<int> answer;

	for (int i = 1; i < p; i++) {
		if (p % i == 0) {
			answer.push_back(i);
		}
	}

	if (answer.size()< q) {
		cout << 0;
	}
	else {
		cout << answer[q-1];
	}
}