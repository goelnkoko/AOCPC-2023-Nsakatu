#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ll a, b, q;

    cin >> a >> b >> q;

    if(q%3 == 1)
        cout << a << endl;
    else if(q%3 == 2)
        cout << b << endl;
    else 
        cout << (a^b) << endl;
}