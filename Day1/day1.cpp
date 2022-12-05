#include <bits/stdc++.h>
using namespace std;

int main(){
		freopen("input.in","r",stdin);
		string x;
		int elf = 0;
		priority_queue<int>elfs;
		while(!feof(stdin)){
				getline(cin,x);
				if(x.empty()){
						elfs.push(elf);
						elf = 0;
				}else{
						elf+=stoi(x);
				}
				
		}
		int total = 0;
		for(int i=0;i<3;i++){
				total += elfs.top();
				elfs.pop();
		}
		cout << total << endl;
}
