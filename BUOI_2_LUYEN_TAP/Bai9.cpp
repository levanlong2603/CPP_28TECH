#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int min_step = ceil(n / 2);
	int resut = (min_step + 1) / m * m;
	if(resut > n) cout << -1;
	else cout << resut;
}
