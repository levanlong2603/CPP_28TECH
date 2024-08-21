#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n;
	cin >> n;
	int c = 0, l = 0;
	while(n > 0){
		if(n % 10 % 2 == 0){
			c += n % 10;
		}
		else l += n % 10;
		n /= 10;
	}
	cout << c << " " << l;
}
