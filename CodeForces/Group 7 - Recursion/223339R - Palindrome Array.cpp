#include <bits/stdc++.h>

using namespace std;

bool pal(int a[], int l, int r){
    
    if(l > r)
        return true;
    
    if(a[l] == a[r])
        return pal(a, l+1, r-1);
    else 
        return false;
}

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    if(pal(a, 0, n-1)){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}