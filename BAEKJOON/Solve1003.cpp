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
        a1 = 0; a2 = 0;
        cin >> num;
        int a = fibonacci(num);

        cout<< a1<< " " << a2;
    }
}