#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x, y; cin >> x >> y;
	long long s = 1;
	while(y--){
		s *= x;
	}
	cout << s;
}
