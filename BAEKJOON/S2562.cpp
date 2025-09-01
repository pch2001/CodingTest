#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    int a, b, c;
    for(int i =0; i<M; i++){
        cin >> a >> b >> c;
        for (int j = a-1; j <b; j++) {
            arr[j] = c;
        }
    }

    for (int a : arr) {
        cout << a<<" ";
    }
}
