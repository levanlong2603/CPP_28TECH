#include <bits/stdc++.h>
using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	int cnt = 0;
	for(int i = ceil(a); i <= b; i++){
		cnt++;
	}
	cout << cnt;
}
