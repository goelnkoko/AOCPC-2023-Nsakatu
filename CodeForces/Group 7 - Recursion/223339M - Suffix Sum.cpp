#include <bits/stdc++.h>
using namespace std;

long long sum(int a[], int i, int m){
    if(m == 1)
        return a[i];
    
    return a[i] + sum(a, --i, --m);    
}

int main(){

    int n, m;
    cin >> n >> m;
    int a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    cout << sum(a, n-1, m) << endl;
}