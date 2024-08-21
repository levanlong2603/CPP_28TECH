#include<bits/stdc++.h>
using namespace std;

long long f[100];
void ktao(){
    f[1] = f[2] = 1;
    for(int i = 3; i < 93; i++){
        f[i] = f[i-1] + f[i - 2];
    }
}

int main(){
    ktao();
    long long n; cin >> n;
    for(int i = 1; i < 93; i++){
        if(n == f[i]){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
}
