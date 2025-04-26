#include <iostream>
#include <string>
using namespace std;

int charToValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0'; // ���� ����
    }
    else {
        return c - 'A' + 10; // ���ĺ� ����
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