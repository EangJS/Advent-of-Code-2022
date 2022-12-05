#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<char>one;
    stack<char>two;
    stack<char>three;
    stack<char>four;
    stack<char>five;
    stack<char>six;
    stack<char>seven;
    stack<char>eight;
    stack<char>nine;
    string a = "MJCBFRLH";
    string b ="ZCD";
    string c ="HJFCNGW";
    string d = "PJDMTSB";
    string e = "NCDRJ";
    string f = "WLDQPJGZ";
    string g = "PZTFRH";
    string h = "LVMG";
    string j = "CBGPFQRJ";
    for(auto i : a){
        one.push(i);
    }
    for(auto i : b){
        two.push(i);
    }
    for(auto i : c){
        three.push(i);
    }
    for(auto i : d){
        four.push(i);
    }
    for(auto i : e){
        five.push(i);
    }
    for(auto i : f){
        six.push(i);
    }
    for(auto i : g){
        seven.push(i);
    }
    for(auto i : h){
        eight.push(i);
    }
    for(auto i : j){
        nine.push(i);
    }
    string w,x,y;
    int m,n,p;
    map<int,stack<char>>mappings;
    mappings[1] = one;
    mappings[2] = two;
    mappings[3] = three;
    mappings[4] = four;
    mappings[5] = five;
    mappings[6] = six;
    mappings[7] = seven;
    mappings[8] = eight;
    mappings[9] = nine;
    while(1){
        cin >> w;
        if(w == "end"){
            break;
        }
        cin >> m >> x >> n >> y >> p;
        stack<char>temps;
        while(m--){
            char temp = mappings[n].top();
            mappings[n].pop();
            temps.push(temp);
        }
        while(!temps.empty()){
            char var = temps.top();
            temps.pop();
            mappings[p].push(var);
        }

    }
    for(auto i:mappings){
        cout << i.second.top();
    }
    cout << "\n";
    


    
}