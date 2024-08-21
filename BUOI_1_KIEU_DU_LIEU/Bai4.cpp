#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	long long sum = a + b;
	long long hieu = a - b;
	long long tich = a * b;
	double thuong = (double)a / b;
	
	cout << sum << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong;
}
