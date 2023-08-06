#include <bits/stdc++.h>

using namespace std;

int s=0;
void r(int n){
    if(n == 0){
        if(s==0) cout << 0;
        return;
    }

    s++;
    r(n/10);
    cout << n%10 << " ";
}

int main(){

    int n, t;
    cin >> t;

    while(t--){
        cin >> n;
        r(n);
        s=0;
        cout << endl;
    }
}