#include <bits/stdc++.h>
using namespace std;

int main(){
	char a;
	cin >> a;
	if(isalpha(a)){
		if(tolower(a) == 122) cout << "a";
		else cout << (char)(tolower(a) + 1);
	}
	else cout << "INVALID";
}
