#include<bits/stdc++.h>
using namespace std;

int a[10];
void ktao(){
    int x = 1;
    for(int i = 1; i < 10; i++){
        x *= i;
        a[i] = x;
    }
}

bool check(int n){
    ktao();
    int sum = 0, m = n;
    while(n > 0){
        sum += a[n%10];
        n /= 10;
    }
    return sum == m;
}

int main(){
    int n; cin >> n;
    if(check(n)) cout << 1;
    else cout << 0;
}

