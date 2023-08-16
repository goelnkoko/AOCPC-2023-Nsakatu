#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> n(3), m;
    cin >> n[0] >> n[1] >> n[2];
    m = n;

    sort(n.begin(), n.end());

    for(int i: n)
        cout << i << endl;
    cout << endl;
    for(int i: m)
        cout << i << endl;
}