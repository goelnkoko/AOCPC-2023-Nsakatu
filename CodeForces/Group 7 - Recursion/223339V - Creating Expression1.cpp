#include <bits/stdc++.h>

using namespace std;

int sum;
bool ver = false;

void poss(int n, int x, int v[], char a[], int i){
    if(i == n){
        sum = v[0];
        for(int j=0; j < n; j++){
            if(a[j] == '+') 
                sum += v[j+1];
            if(a[j] == '-')
                sum -= v[j+1];
        }
        if(sum == x){
            ver = true;
            return;
        }
        else {
            return;
        } 
    }

    if(ver) return;
    a[i] = '+';
    poss(n, x, v, a, i+1);

    if(ver) return;
    a[i] = '-';
    poss(n, x, v, a, i+1);
}

int main(){

    int n, x;
    cin >> n >> x;
    int v[n];
    char a[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    poss(n-1, x, v, a, 0);

    cout << (ver? "YES":"NO") << endl;
}