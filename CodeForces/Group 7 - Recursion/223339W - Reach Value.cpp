#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool rv(ll n){
    if(n == 1)
        return true;
    if(n%10 != 0 && n%20 != 0)
        return false;

    return rv(n/10) || rv(n/20);
}

int main(){

    int t;
    ll n;
    cin >> t;

    while(t--){
        cin >> n;
        cout << (rv(n)? "YES":"NO") << endl;
    }
}