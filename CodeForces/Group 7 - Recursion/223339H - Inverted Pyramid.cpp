#include <bits/stdc++.h>

using namespace std;

void r(int n, string s){
    if(n == 0)
        return;

    r(n-1, s+"**");
    cout << setw(n+s.size()-1) << s << endl;
}

int main(){

    int n;
    cin >> n;
    string s = "*";

    r(n, s);
}