#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int p[n+1];

    for(int i=1; i <= n; i++){
        int aux;
        cin >> aux;
        p[aux] = i;
    }

    for(int i=1; i <= n; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}