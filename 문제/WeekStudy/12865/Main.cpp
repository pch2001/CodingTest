#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[100001];

int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int w, v;
        cin >> w >> v;

        for (int j = K; j >= w; j--) {
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }

    cout << dp[K] << endl;
    return 0;
}