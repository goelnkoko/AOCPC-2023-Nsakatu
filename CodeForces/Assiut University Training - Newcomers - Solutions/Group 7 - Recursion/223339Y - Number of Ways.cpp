#include <bits/stdc++.h>
using namespace std;

int c=0;

void now(int n){

    if(n == 0){
        c++;
        return;
    }
    if(n < 0)
        return;
        
    now(n-1);
    now(n-2);
    now(n-3);
}

int main(){

    int s, e;
    cin >> s >> e;

    now(e-s);

    cout << c << endl;
}