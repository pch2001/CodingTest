#include<iostream>
#include<string>
using namespace std;

int main() {
	string sentence;
	cin >> sentence;
	int time=0;
	for (int i = 0; i < sentence.length();i++) {
		if('A'<=sentence[i] && sentence[i]<='C')
			time +=3;
		if ('D' <= sentence[i] && sentence[i] <= 'F')
			time += 4;
		if ('G' <= sentence[i] && sentence[i] <= 'I')
			time += 5;
		if ('J' <= sentence[i] && sentence[i] <= 'L')
			time += 6;
		if ('M' <= sentence[i] && sentence[i] <= 'O')
			time += 7;
		if ('P' <= sentence[i] && sentence[i] <= 'S')
			time += 8;
		if ('T' <= sentence[i] && sentence[i] <= 'V')
			time += 9;
		if ('W' <= sentence[i] && sentence[i] <= 'Z')
			time += 10;
	}
	cout << time;
}