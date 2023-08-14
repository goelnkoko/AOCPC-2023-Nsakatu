#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll lN(ll n){
    ll l =0, r = n/2, sum=0, mid, res;
    
    if(n > 1000000000)
        r = 10000000000;
    while(l <= r){
        mid = (l+r)/2;
        sum = ((1+mid)*mid)/2;
        if(sum <= n){
            res = mid;
            l = mid+1;
        }
        else if(sum > n)
            r = mid-1;
    }
    return res;
}

int main(){

    ll n;
    cin >> n;

    cout << lN(n) << endl;
}