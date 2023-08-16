#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool p2(ll n){
    if(n == 1)
        return true;
    if(n%2 == 1)
        return false;

    return p2(n/2);
}

int main(){
    ll n;
    cin >> n;

    cout << (p2(n)? "YES":"NO") << endl; 
}