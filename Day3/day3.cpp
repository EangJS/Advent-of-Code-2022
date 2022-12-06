#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    int count = 0;
    while (cin >> x) {
        if (x == "end") {
            break;
        } else {
            int len = x.length();
            map<char, int> first_part;
            map<char, int> second;
            for (int i = 0; i < len / 2; i++) {
                first_part[x[i]] += 1;
            }
            for (int i = len / 2; i < len; i++) {
                if (first_part[x[i]] > 0) {
                    if (int(x[i]) > 96) {
                        count += int(x[i]) - 96;
                    } else {
                        count += int(x[i]) - 64 + 26;
                    }
                    break;
                }
            }
        }
    }
    cout << count << endl;
}