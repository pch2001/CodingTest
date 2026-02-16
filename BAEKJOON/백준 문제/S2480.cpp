#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int prize = 0;

    if (a == b && b == c) { 
        prize = 10000 + a * 1000;
    }
    else if (a == b || a == c) {
        prize = 1000 + a * 100;
    }
    else if (b == c) { 
        prize = 1000 + b * 100;
    }
    else {
        int max_num = max(a, max(b, c));
        prize = max_num * 100;
    }

    cout << prize << endl;
    return 0;
}
