#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll sum (int a, int b, int x){

    if(a%x != 0)
        a = a -(a%x)+x;
    b -= (b%x);

    ll n = (b-a)/x + 1;

    return ((a+b)*n)/2;
}
 
int main(){

    int a, b, x;
    cin >> a >> b >> x;

    cout << sum(min(a, b), max(a, b), x) << endl;
}