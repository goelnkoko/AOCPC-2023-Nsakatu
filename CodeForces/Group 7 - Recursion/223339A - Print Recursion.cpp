#include <bits/stdc++.h>

using namespace std;

void r(int n){
    if(n == 0)
        return;
    
    cout << "I love Recursion" << endl;
    return r(n-1);
}

int main(){
    int n;
    cin >> n;
    r(n);
}