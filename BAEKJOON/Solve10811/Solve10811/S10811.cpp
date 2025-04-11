#include<iostream>
#include<vector>
#include <algorithm> 

using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	N++;
	vector<int> vec(N);

	for (int i = 0; i < N; i++) {
		vec[i] = i;
	}


	int a, b;
	for (int i = 1; i <= M; i++) {
		cin >> a >> b;
		reverse(vec.begin() + a, vec.begin() + b + 1);
	}

	for (int i = 1; i < N; i++) {
		cout << vec[i] << " ";
	}
	
}
