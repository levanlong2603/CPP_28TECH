#include <bits/stdc++.h>
using namespace std;

int main(){
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	if(d1 + d2 <= d3) cout << (d1 + d2)*2;
	else if(d1 + d3 <= d2) cout << (d1 + d3)*2;
	else if(d2 + d3 <= d1) cout << (d2 + d3)*2;
	else cout << d1 + d2 + d3;
}
