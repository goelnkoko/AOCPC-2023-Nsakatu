#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(ll a){
    if(a < 2) 
        return false;

    for(ll i=2; i*i <= a; i++)
        if(a%i == 0) 
            return false;
        
    return true;
}

int main(){

    ll n;
    cin >> n;

    cout << (isPrime(n)? "YES":"NO") << endl;
}