#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A>> B>> C;
	cout << ((A + B) % C) << endl;
	cout << (((A % C) + (B % C)) % C) << endl;
	cout << ((A * B) % C) << endl;
	cout << (((A % C) * (B % C)) % C) << endl;

	/*if ((A + B) % C)
		cout << 1 << endl;
	else
		cout << 0 << endl;

	if (((A % C) + (B % C)) % C)
		cout << 1 << endl;
	else
		cout << 0 << endl;

	if ((A*B) % C)
		cout << 1 << endl;
	else
		cout << 0 << endl;


	if (((A % C) *(B % C)) % C)
		cout << 1 << endl;
	else
		cout << 0 << endl;*/

}