#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(j == 1 || j == m || i == 1 || i == n){
                cout << "*";
            }
            else cout << ".";
        }
        m--;
        cout << endl;
    }
}
