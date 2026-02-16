#include<iostream>
using namespace std;

int main() {
	string word;
	cin >> word;


	int count=0;
	for (int i = 0; i < word.length();) {
		if (i + 2 < word.length() && word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
			count++;
			i += 3;
		}
		else if (i + 1 < word.length()) {
			string two = word.substr(i, 2);
			if (two == "c=" || two == "c-" || two == "d-" ||
				two == "lj" || two == "nj" || two == "s=" || two == "z=") {
				count++;
				i += 2;
			}
			else {
				count++;
				i += 1;
			}
		}
		else {
			count++;
			i++;
		}
		
	}
	cout << count;
}