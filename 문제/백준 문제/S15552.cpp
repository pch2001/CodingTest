#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int count,a,b;
	//string answer;

	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a >> b;
		cout << (a + b) << "\n";
		//answer +=(a+b)+"\n";
	}
	//cout << answer;
}