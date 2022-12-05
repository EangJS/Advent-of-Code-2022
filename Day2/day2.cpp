#include <bits/stdc++.h>
using namespace std;

int main(){
	char a,b;
	int count = 0;
	map<char,char>combination;
	map<char,int>points;
	map<char,char>eqv;
	points['Y'] = 2;
	points['X'] = 1;
	points['Z'] = 3;
	combination['A'] = 'Y';
	combination['B'] = 'Z';
	combination['C'] = 'X';
	eqv['A'] = 'X';
	eqv['B'] = 'Y';
	eqv['C'] = 'Z';
	while(1){
			cin >> a >> b;
			if(a == 'e'){
					break;
			}
			count += points[b];
			if(eqv[a] == b){
					count += 3;
			}
			else if(b == combination[a]){
					count += 6;
			} 
			else{
					count += 0;
			}
	}
	cout << count << endl;
}
