#include<iostream>
using namespace std;

void prime_print(int N) {
	for (int i = 2; i <= N; i++) {
		while (N % i == 0) {
			cout << i << "\n";
			N /= i;
		}
		if (N == 1) break;
	}
}

int main() {
	int N;
	cin >> N;
	prime_print(N);
	return 0;
}
