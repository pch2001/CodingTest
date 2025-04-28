#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    string result;

    // N을 B진법으로 변환
    while (N > 0) {
        int remainder = N % B;
        if (remainder < 10) {
            result += (char)(remainder + '0'); // 숫자는 '0' ~ '9'
        }
        else {
            result += (char)(remainder - 10 + 'A'); // 10 이상은 'A' ~ 'Z'
        }
        N /= B;
    }

    // 결과가 뒤집혀 있으니 정렬
    reverse(result.begin(), result.end());

    cout << result << endl;

    return 0;
}
