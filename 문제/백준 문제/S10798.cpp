#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words(5);
    int biglength = 0;
    for (int i = 0; i < words.size(); i++) {
        cin >> words[i];
        biglength = max(biglength,(int)words[i].length());
    }

    for (size_t i = 0; i < biglength; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < words[j].length()) {
                cout << words[j][i];
            }
        }
    }
}
