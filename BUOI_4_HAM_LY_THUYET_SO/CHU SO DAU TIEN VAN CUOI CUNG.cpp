#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    int end = n % 10;
    while(n > 9){
        n /= 10;
    }
    cout << n << " " << end;
}

