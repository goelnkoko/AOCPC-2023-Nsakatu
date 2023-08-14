#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, c=0, im, last;
    cin >> n;
    
    bool f = true;

    while(n--){
        cin >> im;
        if(f) { last = im; f = false;}
        if(im != last) { c++; last = im;}
    } 

    cout << c+1 << endl;
}