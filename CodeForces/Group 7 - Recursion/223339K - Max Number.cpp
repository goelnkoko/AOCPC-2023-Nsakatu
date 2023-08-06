#include <bits/stdc++.h>
using namespace std;

int maxN(int a[], int i, int m){
    if(i == -1)
        return m;
    
    if(a[i] > m)
        return maxN(a, i-1, a[i]);
    else 
        return maxN(a, i-1, m);
}

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    cout << maxN(a, n-2, a[n-1]) << endl;
}