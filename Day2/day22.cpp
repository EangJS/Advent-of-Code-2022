#include <bits/stdc++.h>
using namespace std;

int main(){
	char a,b;
	int count = 0;
	map<char,int>points;
	map<char,int>win_type;
	map<char,int>draw_type;
	map<char,int>lose_type;
	win_type['A'] = 2;
	win_type['B'] = 3;
	win_type['C'] = 1;
	draw_type['A'] = 1;
	draw_type['B'] = 2;
	draw_type['C'] = 3;
	lose_type['A'] = 3;
	lose_type['B'] = 1;
	lose_type['C'] = 2;
 	points['Z'] = 6;  //win
	points['Y'] = 3;  //draw
	points['X'] = 0;  //lose

	while(1){
			cin >> a >> b;
			if(a == 'e'){
					break;
			}
			if(b == 'Z'){
				count+=points[b] + win_type[a];
			}
			if(b == 'Y'){
				count+=points[b] + draw_type[a];
			}
			if(b == 'X'){
				count+=points[b] + lose_type[a];
			}
	}
	cout << count << endl;
}
