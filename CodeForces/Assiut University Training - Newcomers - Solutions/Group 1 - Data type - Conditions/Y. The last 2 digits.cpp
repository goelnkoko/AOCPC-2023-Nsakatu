#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long a, b, c, d, l, r;
    cin >> a >> b >> c >> d;

    l = (a*b)%100;
    r = (c*d)%100;

    if((l*r)%100 < 10)
        cout << '0' << (l*r)%100 << endl;
    else 
        cout << (l*r)%100 << endl;
}