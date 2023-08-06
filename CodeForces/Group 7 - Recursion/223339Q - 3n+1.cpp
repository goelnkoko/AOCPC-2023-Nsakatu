#include <bits/stdc++.h>
using namespace std;

int seq(int n){
    //Em qualquer das situações, vai somar

    if(n == 1)
        return 1;

    if(n%2==0)
        return 1+seq(n/2);
    else 
        return 1+seq(3*n+1);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << seq(n) << endl;
}