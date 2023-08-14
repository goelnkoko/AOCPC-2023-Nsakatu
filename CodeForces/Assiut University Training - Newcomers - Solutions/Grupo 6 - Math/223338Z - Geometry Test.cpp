#include <bits/stdc++.h>

using namespace std;

int main(){

    double r, l;
    cin >> r >> l;

    bool c = (2*r >= l*sqrt(2));
    bool s = (l >= 2*r);

    if(c && s || !c && !s)
        cout << "Complex" << endl;
    else if(c)
        cout << "Circle" << endl;
    else if(s)
        cout << "Square" << endl;
}