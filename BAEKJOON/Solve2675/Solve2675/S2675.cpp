#include<iostream>
using namespace std;

int main() {
	int count, repeat;
	string word;
	cin >> count;
	for (int i = 0; i < count;i++) {
		cin >> repeat >> word;
		for (int j = 0; j <= repeat; j++) {
			for (int x = 0; x <= word.size()-1; x++) {
				cout << word[j];
			}
		}
		cout << endl;
	}
}