#include <bits/stdc++.h>
using namespace std;

int main(){
	double n;
	cin >> n;
	double S = 0;
	for(double i = 1; i <= n; i++){
		S += 1/(i * (i + 1));
	}
	cout << fixed << setprecision(2) << S;
}
