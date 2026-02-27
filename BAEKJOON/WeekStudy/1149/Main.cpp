#include <iostream>

int dp[1002][3] = { 0 };

int main() {
    int N, answer;
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        std::cin >> dp[i][0] >> dp[i][1] >> dp[i][2];

        dp[i][0] += std::min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] += std::min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] += std::min(dp[i-1][0], dp[i-1][1]);
    }
    answer = std::min(dp[N][0], std::min(dp[N][1], dp[N][2]));

    std::cout << answer;
}