#include<iostream>
using namespace std;

int main() {
	int n;
	int init=4;
	int count = 1;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		count *= 2;
	}
	//cout << count;
	cout << (count + 1)*(count+1);


	//4->9->25
	//1->4->16->64
	// »ç°¢Çü °¹¼ö+1
}