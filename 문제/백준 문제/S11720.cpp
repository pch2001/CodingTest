#include<iostream>
#include <string>

using namespace std;
int main() {
	int count, answer=0;
	cin >> count;
	string word;
	cin >> word;
	for (int i = 0; i < count; i++) {
		answer += word[i]-'0';
		//cout << word[i]<<" ";
	}
	cout << answer;
}


