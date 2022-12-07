#include <bits/stdc++.h>

using namespace std;

map<string, vector<string>> AL;
map<string, long> directory;
map<string, bool> visited;
map<string, long> direct;

int main() {
    string input;
    string current_dir;
    AL["/"].push_back("/");
    int name = 0;
    while (1) {
        cin >> input;
        if (input == "end") {
            break;
        } else if (input == "ls" || input == "$") {
            continue;
        } else if (input == "cd") {
            string file;
            cin >> file;
            if (file == "..") {
                current_dir = *AL[current_dir].begin();
            } else {
                current_dir = file;
            }
        } else if (input == "dir") {
            string file;
            cin >> file;
            if (visited[file]) {
                file += to_string(name);
                name++;
            }
            visited[current_dir] = false;
            AL[current_dir].push_back(file);
            AL[file].push_back(current_dir);
        } else {
            string dummy;
            cin >> dummy;
            directory[current_dir] += stol(input);
        }
    }
    direct = directory;
    dfs("/");
    long count = 0;
    for (auto i : direct) {
        cout << i.first << " " << i.second << endl;
        if (i.second <= 100000) {
            count += i.second;
        }
    }
    cout << count << endl;
}