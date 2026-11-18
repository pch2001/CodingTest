#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<float> score(N);
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		score[i] = a;
	}

	float max = *max_element(score.begin(),score.end());
	float answer=0;

	for (int i = 0; i < N; i++) {
		answer += score[i]/max*100;
	}

	cout << answer/N;
}