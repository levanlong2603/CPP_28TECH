#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n ,a , b;
	cin >> n >> a >> b;
	if(b*1.0 / 2 >= a) cout << n*a;
	else {
		if(n % 2) cout << n / 2 * b + a;
		else cout << n / 2 * b;
	}
}
