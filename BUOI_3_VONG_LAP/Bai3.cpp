#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	if(n < 3){
		cout << 0;
		return 0;
	}
	int sum = 0;
	for(int i = 3; i <= n; i += 3){
		sum += i;
	}
	cout << sum;
}
