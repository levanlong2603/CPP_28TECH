#include <bits/stdc++.h>
using namespace std;

long long fibo[100];
void ktao(){
    fibo[1] = fibo[2] = 1;
    for(int i = 3; i < 20; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

bool nt(int n){
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
    }
    return n > 2;
}

bool check(int n){
    ktao();
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    for(int i = 1; i < 20; i++){
        if(sum == fibo[i]) return true;
    }
    return false;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(check(i) && nt(i)){
            cout << i << " ";
        }
    }
}