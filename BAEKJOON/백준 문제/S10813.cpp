#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    int a, b;
    for (int i = 0; i < N; i++) {
        arr[i] = i+1;
    }

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        int temp;
        temp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = temp;
    }

    for (int a : arr) {
        cout << a << " ";
    }
}
