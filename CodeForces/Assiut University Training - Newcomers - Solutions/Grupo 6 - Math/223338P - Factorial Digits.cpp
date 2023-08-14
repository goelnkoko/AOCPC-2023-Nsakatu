#include <bits/stdc++.h>
#define ll long long

using namespace std;

int fd(int n){

    double c = 0;
    for(int i=1; i <= n; i++)
        c += log10(i);
    
    return c + 1;
}

int main(){

    int n;
    cin >> n;

    cout << "Number of digits of " << n << "! is " << fd(n) << endl;
}