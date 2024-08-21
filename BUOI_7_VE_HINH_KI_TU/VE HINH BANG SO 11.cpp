#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int m = i;
        while(m > 1){
            cout << m;
            m--;
        }
        for(int j = 1; j <= n - i + 1; j++){
            cout << m;
            m++;
        }
        cout << endl;
    }
}
