#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b, c, m, M;
    cin >> a >> b >> c;

    m = min(a, b);
    m = min(m, c);   
    M = max(a, b);
    M = max(M, c);

    cout << m << " " << M << endl; 
}