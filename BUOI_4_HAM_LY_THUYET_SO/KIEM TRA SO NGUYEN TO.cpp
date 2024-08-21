#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
    }
    return n > 2;
}

int main(){
    int n; cin >> n;
    if(nt(n)) cout << 1;
    else cout << 0;
}

