#include<bits/stdc++.h>
using namespace std;

int cnt_digit(int n){
    int cnt = 0;
    while(n > 0){
        cnt++;
        n /= 10;
    }
    return cnt;
}

bool check(int n){
    int sum = 0, m = n;
    int x = cnt_digit(n);
    while(n > 0){
        sum += (int)round(pow(n%10, x));
        n /= 10;
    }
    return sum == m;
}

int main(){
    int n; cin >> n;
    if(check(n)) cout << 1;
    else cout << 0;
}

