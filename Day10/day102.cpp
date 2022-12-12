#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("day102.in","r",stdin);
    string cmd;
    int cycle = 1;
    int x = 1;
    vector<vector<char>>screen;
    vector<char>line(40,'.');
    int i = 0;
    bool processing = false;
    while(cin >> cmd){
        if(cin.eof()){
            break;
        }
        else{
            if(cmd == "noop"){
                if(cycle%40 == 0){
                    break;
                }
                i=x-1;
                line[i] = '#';
                cycle++;
                continue;
            } else if(cmd == "addx"){
                int y;
                cin >> y;

                line[i] = '#';
                if(cycle%40 == 0){
                    break;
                }
                i=x-1;
                cycle++;
                line[i] = '#';
                if(cycle%40 == 0){
                    break;
                }
                i=x-1;
                x+=y;
                cycle++;
            }
        }
    }
    for(auto i:line){
        cout << i;
    }
}
