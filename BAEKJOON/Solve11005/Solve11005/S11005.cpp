#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    string result;

    // N�� B�������� ��ȯ
    while (N > 0) {
        int remainder = N % B;
        if (remainder < 10) {
            result += (char)(remainder + '0'); // ���ڴ� '0' ~ '9'
        }
        else {
            result += (char)(remainder - 10 + 'A'); // 10 �̻��� 'A' ~ 'Z'
        }
        N /= B;
    }

    // ����� ������ ������ ����
    reverse(result.begin(), result.end());

    cout << result << endl;

    return 0;
}
