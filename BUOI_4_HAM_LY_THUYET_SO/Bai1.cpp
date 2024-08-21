#include <bits/stdc++.h>
using namespace std;

bool nt(int n){
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
    }
    return n > 2;
}

bool check(int n){
    int sum = 0;
    while(n > 0){
        if(nt(n % 10) == false) return false;
        sum += n % 10;
        n /= 10;
    }
    return nt(sum);
}

int main(){
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(check(i) && nt(i)){
            cnt++;
        }
    }
    cout << cnt;
}