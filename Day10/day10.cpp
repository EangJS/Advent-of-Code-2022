#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("day10.in","r",stdin);
    string cmd;
    int cycle = 1;
    int x = 1;
    vector<int>vect = {20,60,100,140,180,220};
    vector<int>ans;
    int i = 0;
    bool processing = false;
    while(cin >> cmd){
        if(cin.eof()){
            break;
        }
        else{
            if(cmd == "noop"){
                cout << cycle << ": " << x << endl;
                if(cycle == vect[i]){
                    ans.push_back(x);
                    i++;
                }
                cycle++;
                continue;
            } else if(cmd == "addx"){
                int y;
                cin >> y;
                if(cycle == vect[i]){
                    ans.push_back(x);
                    i++;
                }

                cout << cycle << ": " << x << endl;
                cycle++;
                if(cycle == vect[i]){
                    ans.push_back(x);
                    i++;
                }

                cout << cycle << ": " << x << endl;
                x+=y;
                cycle++;
            }
        }
    }
    int anss = 0;
    for(auto i=0;i<vect.size();i++){
        cout << vect[i]*ans[i] << " ";
        anss += vect[i]*ans[i];
    }
    cout << endl;
    cout << "Ans:" << anss << endl;

}
