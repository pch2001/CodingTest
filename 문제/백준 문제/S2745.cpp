#include <iostream>
#include <string>
using namespace std;

int charToValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0'; // 숫자 문자
    }
    else {
        return c - 'A' + 10; // 알파벳 문자
    }
}

int main() {
    string N;
    int B;
    cin >> N >> B;

    long long result = 0;

    for (char c : N) {
        result = result * B + charToValue(c);
    }

    cout << result << endl;

    return 0;
}