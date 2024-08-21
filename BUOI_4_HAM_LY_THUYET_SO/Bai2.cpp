#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    int sum = 1, m = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(n/i != i) sum += n/i;
        }
    }
    return sum == m && sum > 1;
}

int main(){
    int a, b;
    cin >> a >> b;
    int ok = 1;
    for(int i = a; i <= b; i++){
        if(check(i)){
            ok = 0;
            cout << i << " ";
        }
    }
    if(ok) cout << 0;
}