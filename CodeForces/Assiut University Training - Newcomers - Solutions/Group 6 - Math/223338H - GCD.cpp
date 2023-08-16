#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(int a, int b){
    if(b == 0)
        return a;
    
    return gcd(b, a%b);
}

ll lcm(int a, int b){
    return (a/gcd(a, b))*b;
}

int main(){

    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << " " << lcm(a, b) << endl;
}