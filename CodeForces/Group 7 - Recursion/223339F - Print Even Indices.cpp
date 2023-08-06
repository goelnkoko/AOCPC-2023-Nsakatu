#include <bits/stdc++.h>

using namespace std;

void r(int a[], int i){
    if(i == -1)
        return;
    
    if(i%2 == 0)
        cout << a[i] << " ";
    
    r(a, --i);
}

int main(){

    int t;
    cin >> t;
    int a[t];

    for(int i=0; i < t; i++){
        cin >> a[i];
    }

    r(a, t-1);
    cout << endl;
}