#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n - 1, p = n;;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << "~";
        }
        for(int j = 1; j <= p - m; j++){
            cout << "*";
        }
        m--; p++;
        cout << endl;
    }
    m = 1; p -= 2;
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= m; j++){
            cout << "~";
        }
        for(int j = 1; j <= p - m; j++){
            cout << "*";
        }
        p--; m++;
        cout << endl;
    }
}
