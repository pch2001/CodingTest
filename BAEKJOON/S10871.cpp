#include <iostream>
#include <vector>
using namespace std;

int main() {
    int idx = 0, number;
    cin >> idx >> number;

    vector<int> arr(idx);
    for (int i = 0; i < idx; i++) {
        cin >> arr[i];
        if (arr[i] < number) {
            cout << arr[i] << " ";
        }
    }




    return 0;
}
