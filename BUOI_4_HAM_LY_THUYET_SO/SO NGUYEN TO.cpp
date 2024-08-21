#include<bits/stdc++.h>
using namespace std;

int sum_digit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool check(int n){
    if(n % 2 == 0 || sum_digit(n) % 5 != 0) return false;
    for(int i = 3; i <= sqrt(n); i+= 2){
        if(n % i == 0) return false;;
    }
    return n > 2;
}

int main(){
    int cnt = 0;
    int n;
    cin >> n;
    for(int i = 5; i < n; i++){
        if(check(i)){
            cnt++;
            cout << i << " ";
        }
    }
    cout << endl << cnt;
}
