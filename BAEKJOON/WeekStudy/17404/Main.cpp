#include <iostream>

int dp[1002][3] = { 0 };

int main() {
    int N, answer;
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        std::cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
    }
    int first=0;
    bool firstcheck = true;
    for (int i = 1; i <= N; i++) {
        if (i == 1)
        {
            dp[i][0] += std::min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] += std::min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] += std::min(dp[i - 1][0], dp[i - 1][1]);
            if (dp[i][0] > dp[i][1] && dp[i][0] > dp[i][1])
            {
                first = 0;
            }
            else if (dp[i][0] > dp[i][1] && dp[i][0] > dp[i][1])
            {
                first = 1;
            }
            else
                first = 2;
        }
        else if (i == N)
        {
            dp[i][0] += std::min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] += std::min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] += std::min(dp[i - 1][0], dp[i - 1][1]);
        }
        else
        {
            if (i==0)
            {

            }
            else if (i == 1)
            {
            }
            else
            {

            }

            dp[i][0] += std::min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] += std::min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] += std::min(dp[i - 1][0], dp[i - 1][1]);
        }
    }

    answer = std::min(dp[N][0], std::min(dp[N][1], dp[N][2]));

    std::cout << answer;
}