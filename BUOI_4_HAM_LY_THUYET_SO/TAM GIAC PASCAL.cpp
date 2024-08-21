#include<bits/stdc++.h>
using namespace std;

long long a[20];
void ktao(){
    a[0] = 1;
    long long x = 1;
    for(int i = 1; i < 20; i++){
        x *= i;
        a[i] = x;
    }
}


int main(){
    ktao();
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << a[i] / (a[j] * a[i - j]) << " ";
        }
        cout << endl;
    }
}
