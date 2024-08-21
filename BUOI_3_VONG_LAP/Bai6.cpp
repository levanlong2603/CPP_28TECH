#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int sum = 0;
	int x = -1;
	for(int i = 1; i <= n; i++){
		sum += i*x;
		x *= -1;
	}
	cout << sum;
}
