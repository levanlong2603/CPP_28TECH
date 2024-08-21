#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, k;
	cin >> a >> b >> k;
	if(k % 2 == 0){
		cout << (a - b)*(k/2);
	}
	else cout << (a - b)*(k/2) + a;
}
