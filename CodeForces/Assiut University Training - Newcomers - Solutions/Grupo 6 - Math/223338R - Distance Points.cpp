#include <bits/stdc++.h>

using namespace std;

double d(int x, int y, int a, int b){
    return sqrt(pow((x-a), 2)+pow((y-b), 2));
}

int main(){

    int x, y, a, b;
    cin >> x >> y >> a >> b;
    cout << setprecision(9) << fixed << d(x, y, a, b) << endl;

}