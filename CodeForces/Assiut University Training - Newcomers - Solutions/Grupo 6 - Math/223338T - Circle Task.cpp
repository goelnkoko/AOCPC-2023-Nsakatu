#include <bits/stdc++.h>
#define d double

using namespace std;

d dist(d c1, d c2, d x, d y){
    return sqrt(pow((x-c1), 2)+pow((y-c2), 2));
}

int main(){

    int n;
    d c1, c2, r, x, y;

    cin >> c1 >> c2 >> r >> n;

    while(n--){
        cin >> x >> y;
        cout << (dist(c1, c2, x, y) <= r? "YES":"NO") << endl;
    }
}