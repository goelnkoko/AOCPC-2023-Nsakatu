#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ll l, r, m, res = 1;
    cin >> l >> r >> m;

    for(ll i=l; i <= r; i++){
        res *= i;
        res %= m;
    }

    cout << res << endl;  
}