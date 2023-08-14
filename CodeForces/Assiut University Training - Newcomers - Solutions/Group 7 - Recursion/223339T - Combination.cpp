#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll comb(int n, int r){
    if(n == r || r == 0)
        return 1;
    if(r > n)
        return 0;

    return comb(n-1, r) + comb(n-1, r-1);
}

int main(){
    int n, r;
    cin >> n >> r;

    cout << comb(n, r) << endl;
}