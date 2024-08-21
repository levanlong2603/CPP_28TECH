#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int end = n % 10;
    n /= 10;
    int a = n, b = 1;
    while(n > 9){
        b *= 10;
        n /= 10;
    }
    cout << end * b * 10 + a % b * 10 + n;
}

