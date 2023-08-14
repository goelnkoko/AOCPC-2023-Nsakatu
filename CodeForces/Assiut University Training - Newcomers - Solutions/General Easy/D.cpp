#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n,m,c=0;
    cin >> n>>m;

    while(n<=m){
        n*=3;
        m*=2;
        c++;
    } 

    cout << c << endl;
}
