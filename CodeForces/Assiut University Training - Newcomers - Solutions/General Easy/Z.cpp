#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    string s;
    cin >> n >> s;
    
    string a = s, a2 = "", last;

    while(a2 != s){
        last = a;
        a2 = "";
        while(a.size() != 0){
            int m = (a.size()-1)/2;
            a2 += a[m];
            a.erase(a.begin()+m);
        }
        a = a2;
    }

    cout << last << endl;
}