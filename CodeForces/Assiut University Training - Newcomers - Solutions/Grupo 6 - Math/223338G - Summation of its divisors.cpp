#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sum(ll n){
    ll s = 0;
    for(ll i = 1; i*i <= n; i++)
        if(n%i == 0){
            s += i;
            if(n/i != i)
                s+= n/i;
        }
            
    return s;
}

int main(){

    ll n;
    cin >> n;

    cout << sum(n) << endl;

}