#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string word;
	cin >> word;

	int arr[26] = { 0 };

	for (char c : word) {
		c = toupper(c);
		arr[c - 'A']++;
	}

	int maxCount = 0;
	int maxIndex = -1;
	bool dupl = true;
	for (int i = 0; i < 26; i++) {
		if (arr[i] > maxCount) {
			maxCount = arr[i];
			maxIndex = i;
			dupl = true;
		}
		else if (arr[i] == maxCount && maxCount > 0) {
			dupl = false;
		}
	}
	if (dupl)
		cout << (char)(maxIndex + 'A');
	else
		cout << "?";
}