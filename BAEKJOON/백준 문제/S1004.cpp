// Solve1004.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include<iostream>
using namespace std;

static int a1;
static int a2;

int fibonacci(int n) {
    if (n == 0) {
        a1++;
        return 0;
    }
    else if (n == 1) {
        a2++;
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int T, N;
    cin >> T;

    int dp[41][2] = { 0 };  // 최대 N이 40이므로 충분히 큰 배열 선언
    dp[0][0] = 1; dp[0][1] = 0;  // fibonacci(0)
    dp[1][0] = 0; dp[1][1] = 1;  // fibonacci(1)

    // DP 테이블 미리 채우기 (Bottom-up)
    for (int i = 2; i <= 40; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
        dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
    }

    // 테스트 케이스 처리
    while (T--) {
        cin >> N;
        cout << dp[N][0] << " " << dp[N][1] << endl;
    }
}
