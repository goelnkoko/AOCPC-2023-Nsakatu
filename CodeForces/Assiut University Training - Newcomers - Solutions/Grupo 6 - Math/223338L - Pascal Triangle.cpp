#include <bits/stdc++.h>
#define ll long long

using namespace std;

void ncr(int n){
    ll t[n+1][n+1];

    for(int i=0; i < n; i++){
        for(int j=0; j <= i; j++){
            if(i == j){
                t[i][j] = 1;
                cout << 1 << endl;
            }
            else if(j == 0){
                t[i][j] = 1;
                cout << 1 << " ";
            } else {
                t[i][j] = t[i-1][j] + t[i-1][j-1];
                cout << t[i][j] << " ";
            }
        }
    }
}

int main(){

    int n;
    cin >> n;

    ncr(n);
}