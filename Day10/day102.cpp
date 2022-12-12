#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("day102.in", "r", stdin);
    string cmd;
    int cycle = 1;
    int x = 1;
    vector<int> vect = {40, 80, 120, 160, 200, 240};
    vector<int> ans;
    vector<char> line;
    vector<vector<char>> screen;
    int drawing = 0;
    int i = 0;
    int sprite = 1;
    while (cin >> cmd) {
        if (cin.eof()) {
            break;
        } else {
            if (cmd == "noop") {
                cout << cycle << ": " << x << endl;
                if (drawing == sprite || drawing == sprite - 1 || drawing == sprite + 1) {
                    line.push_back('#');
                } else {
                    line.push_back('.');
                }
                if (cycle == vect[i]) {
                    screen.push_back(line);
                    line.clear();
                    ans.push_back(x);
                    i++;
                    sprite = 1;
                    drawing = 0;
                }
                cycle++;
                drawing++;
            } else if (cmd == "addx") {
                // start of 1st cycle
                int y;
                cin >> y;
                if (drawing == sprite || drawing == sprite - 1 || drawing == sprite + 1) {
                    line.push_back('#');
                } else {
                    line.push_back('.');
                }
                if (cycle == vect[i]) {
                    screen.push_back(line);
                    line.clear();
                    ans.push_back(x);
                    i++;
                    sprite = 1;
                    drawing = 0;
                }

                cout << cycle << ": " << x << endl;
                drawing++;
                // end of first cycle
                cycle++;
                // start of second cycle
                if (drawing == sprite || drawing == sprite - 1 || drawing == sprite + 1) {
                    line.push_back('#');
                } else {
                    line.push_back('.');
                }
                if (cycle == vect[i]) {
                    screen.push_back(line);
                    line.clear();
                    ans.push_back(x);
                    i++;
                    sprite = 1;
                    drawing = 0;
                }

                cout << cycle << ": " << x << endl;
                x += y;
                sprite = x;
                drawing++;
                // end of second cycle
                cycle++;
            }
        }
    }
    int anss = 0;
    for (auto i = 0; i < vect.size(); i++) {
        cout << vect[i] * ans[i] << " ";
        anss += vect[i] * ans[i];
    }
    cout << endl;
    cout << "Ans:" << anss << endl;

    for (auto i : screen) {
        for (auto j : i) {
            cout << j;
        }
        cout << endl;
    }
}
