#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
		if(a == b && b == c){
			cout << 1;
		}
		else if(a == b || b == c || c == a){
			cout << 2;
		}
		else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a){
			cout << 3;
		}
		else cout << 4;
	}
	else cout << "INVALID";
}
