#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i % 2) cout << "1";
            else cout << 0;
        }
        cout << endl;
    }
}
