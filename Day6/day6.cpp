#include <bits/stdc++.h>

using namespace std;

int main() {

    string query;
    cin >> query;
    int count = 0;
    int i = 0;
    for (i; i < query.size() - 14; i++) { // for part 2, just change all '4' to '14'
        map<char, int> freq;
        for (int j = 0; j < 14; j++) {
            if (freq[query[i + j]] > 1) {
                break;
            } else {
                freq[query[i + j]]++;
            }
        }
        if (freq.size() == 14) {
            break;
        }
    }
    cout << i + 14 << endl;
}