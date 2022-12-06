#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    int count = 0;
    while (cin >> x) {
        if (x == "end") {
            break;
        }
        string a, b, c, d;
        int x1, x2, y1, y2;
        a = "";
        b = "";
        c = "";
        d = "";
        int i = 0;
        for (i; i < x.length(); i++) {
            if (x[i] == '-') {
                break;
            }
            a += x[i];
        }
        i++;
        for (i; i < x.length(); i++) {
            if (x[i] == ',') {
                break;
            }
            b += x[i];
        }
        i++;
        for (i; i < x.length(); i++) {
            if (x[i] == '-') {
                break;
            }
            c += x[i];
        }
        i++;
        for (i; i < x.length(); i++) {
            d += x[i];
        }
        x1 = stoi(a);
        x2 = stoi(b);
        y1 = stoi(c);
        y2 = stoi(d);
        if (x1 <= y2 && y1 <= x2) {
            count++;
        }
    }
    cout << count << endl;
}