#include<iostream>
#include<string>
using namespace std;
int main() {
	string sentence;
	while (getline(cin, sentence)) {
		cout << sentence<<endl;
	}
}