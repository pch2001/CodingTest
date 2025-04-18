#include<iostream>
using namespace std;
int main() {
	string word;
	cin >> word;

	bool answer = true;
	for (int i = 0; i < word.length();i++) {
		if (word[i] != word[word.length() - 1 - i]) {
			answer = false;
			break;
		}
	}

	if (answer)
		cout << 1;
	else
		cout << 0;
}