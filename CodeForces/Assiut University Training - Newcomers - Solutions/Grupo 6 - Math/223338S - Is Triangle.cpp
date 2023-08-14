#include <bits/stdc++.h>
#define d double
using namespace std;

bool isT(d a, d b, d c){
    if(a >= b+c) return false;
    if(b >= a+c) return false;
    if(c >= a+b) return false;
    return true;
}

d area(d a, d b, d c){
    d sp = (a+b+c)/2.0;
    return sqrt(sp*(sp-a)*(sp-b)*(sp-c));
}

int main(){
    
    d a, b, c;
    cin >> a >> b >> c;

    if(isT(a, b, c))
        cout << "Valid\n" << setprecision(6) << fixed << area(a, b, c) << endl; 
    else 
        cout << "Invalid" << endl;
}