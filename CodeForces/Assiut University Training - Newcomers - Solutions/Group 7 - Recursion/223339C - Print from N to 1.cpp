#include <bits/stdc++.h>

using namespace std;

void r(int n){
    if(n == 0)
        return;

    cout << n; 
    if(n == 1)
        cout << endl;
    else
        cout << " ";

    r(n-1);
}

int main(){
    int n;
    cin >> n;
    r(n);
}