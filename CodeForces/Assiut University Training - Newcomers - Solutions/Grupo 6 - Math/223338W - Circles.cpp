#include <bits/stdc++.h>
#define d double

using namespace std;

int main(){

    d x1, x2, y1, y2, a1, a2, b1, b2;

    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;

    d cx = (x1+x2)/2, cy = (y1+y2)/2;
    d ca = (a1+a2)/2, cb = (b1+b2)/2;

    d r1 = sqrt(pow((y2-y1), 2)+pow((x2-x1), 2))/2;
    d r2 = sqrt(pow((b2-b1), 2)+pow((a2-a1), 2))/2;
    d dist = sqrt(pow((cy-cb), 2)+pow((cx-ca), 2));

    cout << ((dist <= r1 + r2)? "YES":"NO") << endl;
}