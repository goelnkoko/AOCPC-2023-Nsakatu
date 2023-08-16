#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int xm = min(min(x1, x2), min(x3, x4));
    int xM = max(max(x1, x2), max(x3, x4));
    int ym = min(min(y1, y2), min(y3, y4));
    int yM = max(max(y1, y2), max(y3, y4));
    

    int t, p1, p2;
    cin >> t;

    while(t--){
        cin >> p1 >> p2;
        if(p1 >= xm && p1 <= xM && p2 >= ym && p2 <= yM)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}