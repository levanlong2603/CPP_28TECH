#include <bits/stdc++.h>
using namespace std;

int main(){
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double tk = (a + b + c * 2 + d*3) / 7;
	if(tk >= 8) cout << "GOI";
	else if(tk < 8 && tk >= 6.5) cout << "KHA";
	else if(tk < 6.5 && tk >= 5) cout << " TRUNG BINH";
	else cout << "YEU";
}
