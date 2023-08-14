#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    vector<char> a;

    for(char i: s){
        if(isdigit(i))
            a.push_back(i);
    }
    sort(a.begin(), a.end());
    for(int i=0; i < a.size(); i++){
        if(i != 0) cout << '+'; 
        cout << a[i];
    }
}