#include<iostream>
using namespace std;

int main() {
	int count;

	cin >> count;
	for (int i = 0; i < count; i++) {
		string word;
		cin >> word;
		cout << word[0]<<word[word.length()-1]<<endl;
	}
}