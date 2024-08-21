#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n;
	cin >> n;
	int cnt = 0;
	while(n > 0){
		int a= n % 10;
		if(a == 2 || a == 3 || a == 5 || a == 7){
			cnt++;
		}
		n /= 10;
	}
	cout << cnt;
}
