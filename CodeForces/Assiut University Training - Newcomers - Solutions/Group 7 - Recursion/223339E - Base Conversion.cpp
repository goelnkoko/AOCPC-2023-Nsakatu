#include <bits/stdc++.h>

using namespace std;

void r(int n){
    if(n == 0)
        return;

    r(n/2);
    cout << n%2;
}

int main(){

    int n, t;
    cin >> t;

    while(t--){
        cin >> n;
        r(n);
        cout << endl;
    }
}