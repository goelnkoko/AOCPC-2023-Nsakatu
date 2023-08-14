#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, t;
    cin >> s >> t;

    int i=0, j=0; 
    for(; i < t.size() && j < s.size(); i++){
        if(t[i] == s[j])
            j++;
    }

    if(j >= s.size())
        cout << s.size() << endl;
    else
        cout << j+1 << endl;
}