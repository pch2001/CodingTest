#include<iostream>
using namespace std;
int main() {

	string S;
	int arr[26];
	cin >> S;
	
	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}


	for (int i = 0; i < S.size(); i++) {
		if (arr[S[i] - 'a'] == -1) {
			arr[S[i] - 'a'] = i;
		}
	}
	for (int a : arr) {
		cout << a << " ";
	}
}