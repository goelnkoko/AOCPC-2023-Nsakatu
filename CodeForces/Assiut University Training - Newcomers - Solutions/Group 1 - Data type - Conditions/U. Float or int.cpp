#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double n;
    cin >> n;
    int m = n;
    if(n == m)
        cout << "int " << m << endl;
    else 
        cout << "float " << m << " " << n-m << endl;

}