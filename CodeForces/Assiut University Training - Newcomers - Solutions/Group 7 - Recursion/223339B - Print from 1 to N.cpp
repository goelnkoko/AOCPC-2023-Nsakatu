#include <bits/stdc++.h>

using namespace std;

void r(int n){
    if(n == 0)
        return;
    
    r(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;
    r(n);
}