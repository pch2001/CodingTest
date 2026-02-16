#include<iostream>
using namespace std;

int main() {
	int count, repeat;
	string word;
	cin >> count;
	for (int i = 0; i < count;i++) {
		cin >> repeat >> word;
		for (int j = 0; j < word.size(); j++) {
			for (int x = 0; x < repeat; x++) {
				cout << word[j];
			}
		}
		cout << endl;
	}
}