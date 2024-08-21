#include<bits/stdc++.h>
using namespace std;

int main(){
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int a = sqrt(s1*s2/s3);
	cout << (a + s1/a + s2/a)*4;
}
