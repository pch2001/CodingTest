#include<iostream>
#include<vector>
using namespace std;
int main() {
	int idx=0;
	cin >> idx;
	vector<int> arr(idx);

	for (int i = 0; i < arr.size();i++) {
		cin >> arr[i];
	}
	int answer=0, number;
	cin >> number;
	for (int i = 0; i < arr.size();i++) {
		if (arr[i]== number) {
			answer++;
		}
	}
	cout << answer;


}