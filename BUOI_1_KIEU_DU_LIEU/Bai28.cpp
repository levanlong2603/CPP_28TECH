#include <bits/stdc++.h>
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	if(a == 0){
		if(b == 0 && c != 0) cout << "NO";
		else if(b == 0 && c == 0) cout << "INF";
		else {
			if(c == 0) cout << 0;
			else cout << fixed << setprecision(2) << -c/b;
		}
	}
	else {
		double denta = b*b - 4*a*c;
		if(denta < 0) cout << "NO";
		else if(denta == 0) cout << fixed << setprecision(2) << -b/(2*a);
		else {
			cout << fixed << setprecision(2) << (-b + sqrt(denta)) / (2*a) << " ";
			cout << fixed << setprecision(2) << (-b - sqrt(denta)) /(2*a);
		}
	}
}
