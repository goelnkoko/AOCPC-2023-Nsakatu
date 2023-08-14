#include <bits/stdc++.h>
#define d long double
using namespace std;

int main() {
    d x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x2 - x1 != 0) {
        d m = (y2 - y1) / (x2 - x1);
        if ((y3 - y1) == m * (x3 - x1)) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else {
        cout << ((x3 == x1)? "YES":"NO") << endl;
    }
}
