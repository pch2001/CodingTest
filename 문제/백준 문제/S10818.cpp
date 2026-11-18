#include <iostream>
#include <vector>
using namespace std;

int main() {
    int idx = 0, max=-1000000, min=1000000;
    cin >> idx;
    vector<int> arr(idx);

    for (int i = 0; i < idx; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        } if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout <<min << " "<< max;


    return 0;
}
