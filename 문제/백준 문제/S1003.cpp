#include<iostream>
using namespace std;

static int a1;
static int a2;

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        a1++;
        return 0;
    }
    else if (n == 1) {
        printf("1");
        a2++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int count, num;
    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> num;

        int a1 = 1, a2 = 0; // fibonacci(0)
        int b1 = 0, b2 = 1; // fibonacci(1)
        int temp1, temp2;

        for (int j = 2; j <= num; j++) {
            temp1 = a1 + b1;
            temp2 = a2 + b2;
            a1 = b1;
            a2 = b2;
            b1 = temp1;
            b2 = temp2;
        }

        cout << a1 << " " << a2 << endl;
    }
}