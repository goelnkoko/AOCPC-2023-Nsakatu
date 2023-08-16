#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int l = max(a, c);
    int r = min(b, d);
    
    if(l <= r)
        cout << l << " " << r << endl;
    else 
        cout << -1 << endl;
}