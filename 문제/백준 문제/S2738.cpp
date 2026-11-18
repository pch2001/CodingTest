#include<iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	int arr[100][100], arr2[100][100];

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << arr[i][j] + arr2[i][j] <<" ";
		}
		cout << endl;
	}
	return 0;
}