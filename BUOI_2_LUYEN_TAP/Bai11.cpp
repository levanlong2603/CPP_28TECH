#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k, n, w;
	cin >> k >> n >> w;
	long long resut = (w* (w+1)/2)*k - n;
	cout << resut;
}
