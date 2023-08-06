#include <bits/stdc++.h>
using namespace std;

long long sum(int a[], int i){
    if(i == 0)
        return a[0];
    
    return a[i] + sum(a, --i);    
}

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    cout << sum(a, n-1) << endl;
}