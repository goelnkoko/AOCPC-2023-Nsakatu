#include <bits/stdc++.h>
#define MIN INT_MIN
#define MAX INT_MAX

using namespace std;

int main(){

    int t, n, x1, y1, x2, y2;
    cin >> t;

    for(int i=1; i <= t; i++){
        int xm=MIN, xM=MAX, ym = MIN, yM = MAX;
        cin >> n;
        while(n--){
            cin >> x1 >> y1 >> x2 >> y2;
            if(x1 > xm) xm = x1;
            if(y1 > ym) ym = y1;
            if(x2 < xM) xM = x2;
            if(y2 < yM) yM = y2;
        }

        int b = xM - xm;
        int h = yM - ym;
        if(b <= 0 || h <= 0)
            cout << "Case #" << i <<": " << 0 << endl;
        else 
            cout << "Case #" << i <<": " << (b*h) << endl;
    }
}