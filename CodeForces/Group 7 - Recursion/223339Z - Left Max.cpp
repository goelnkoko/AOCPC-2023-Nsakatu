#include <bits/stdc++.h>

using namespace std;

void maxN(int a[], int m, int i, int n){

    if(i == n)
        return;

    if(a[i] > m)
        m = a[i];

    cout << m << " ";
    maxN(a, m, i+1, n);
}
int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i < n; i++)
        cin >> a[i];

    maxN(a, INT_MIN, 0, n);
    cout << endl;
}