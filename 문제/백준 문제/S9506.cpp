#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	while (1) {
		cin >> num;
		vector<int> div;
		int sum = 0;

		if (num == -1)
			break;
		
		for (int i = 1; i <= num/2; ++i) {
			if (num % i == 0) {
				div.push_back(i);
				sum += i;
			}
		}

		if (sum == num) {
			cout << num << " = ";
			for (size_t i = 0; i < div.size(); ++i) {
				cout << div[i];
				if (i != div.size() - 1)
					cout << " + ";
			}
			cout << endl;
		}
		else {
			cout << num << " is NOT perfect." << endl;
		}

	}
}