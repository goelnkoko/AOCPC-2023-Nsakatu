#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1, x2, y1, y2;
CodeForces/Grupo 6 - Math/223338V - Two Lines.cpp    int a1, a2, b1, b2;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    cout << (((y2-y1)*(a2-a1) == (b2-b1)*(x2-x1))? "YES":"NO") << endl;
}