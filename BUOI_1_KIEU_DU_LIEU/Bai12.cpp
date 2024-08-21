#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, c, l;
	cin >> n;
	if(n % 2 == 0){
		c = n/2; l = n/2;
	} 
	else {
		c = n / 2; l = n/2 + 1;
	}
	long long S = c*(c + 1) - l*l;
	cout << S;
}
