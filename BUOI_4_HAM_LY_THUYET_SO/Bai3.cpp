#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    int end = n % 10;
    n /= 10;
    if(n % 10 > end){
        while(n > 0){
            if(n % 10 <= end) return false;
            end = n % 10;
            n /= 10;
        }
    }
    else {
        while(n > 0){
            if(n % 10 >= end) return false;
            end = n % 10;
            n /= 10;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    int sta = pow(10, n - 1);
    int end = pow(10, n);
    int cnt = 0;
    for(int i = sta; i < end; i++){
        if(check(i)){
            cnt++;
        }
    }
    cout << cnt;
}