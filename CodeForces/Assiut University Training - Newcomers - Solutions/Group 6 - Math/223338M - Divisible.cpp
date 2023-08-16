#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int d, c;
    string n;
    cin >> n >> d;
    
    ll r = 0;
    for (char i : n) {
        c = i - '0';
        r = (r*10 + c) % d;
    }

    cout << ((r == 0)? "YES":"NO") << endl;

    return 0;
}