#include <bits/stdc++.h>
using namespace std;

int a[5] = {1, 5, 10, 20, 100};

int main(){
	int n; cin >> n;
	int cnt = 0;
	int i = 4;
	while(n > 0){
		cnt += n / a[i];
		n %= a[i];
		i--;
	}
	cout << cnt;
}
