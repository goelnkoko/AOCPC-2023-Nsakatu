#include <bits/stdc++.h>

using namespace std;

string s = "*";

void r(int n){
    if(n == 0)
        return;

    cout << setw(n+s.size()-1) << s << endl;
    s += "**";
    r(n-1);
}

int main(){

    int n;
    cin >> n;

    r(n);
}