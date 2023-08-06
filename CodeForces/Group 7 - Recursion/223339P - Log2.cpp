#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll log22(ll n){
    if(n == 1) return 0;
    else {
        return 1 + log22(n/2);
    }
}

int main(){

    ll n;
    cin >> n;

    cout << log22(n) << endl;
}