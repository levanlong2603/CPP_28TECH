#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    int sum = 1, m = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(n/i != i) sum += n/i;
        }
    }
    return sum == m;
}

int main(){
    int n; cin >> n;
    for(int i = 2; i < n; i++){
        if(check(i)){
            cout << i << " ";
        }
    }
}

