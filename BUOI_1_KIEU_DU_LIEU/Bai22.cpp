#include <bits/stdc++.h>
using namespace std;

int main(){
	char a;
	cin >> a;
	if(isalpha(a)){
		cout << (char)tolower(a);
	}
	else cout << a;
}
