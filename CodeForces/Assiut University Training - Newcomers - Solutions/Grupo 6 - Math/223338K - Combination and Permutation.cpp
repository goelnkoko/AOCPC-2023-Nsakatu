#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll npr(int n, int r){
    if(r == 1)
        return n;
    if(r == 0)
        return 1;
    
    return n * npr(n-1, r-1);
}

ll ncr(int n, int r){
    if(r == 1)
        return n;
    if(r == 0)
        return 1;

    return n*ncr(n-1, r-1)/r;
}

int main(){

    int n, r;
    cin >> n >> r;

    cout << ncr(n, r) << " " << npr(n, r) << endl;
}