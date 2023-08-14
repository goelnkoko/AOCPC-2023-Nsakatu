#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    bool p = true;
    cin >> s;

    string a = s;
    reverse(a.begin(), a.end());
    
    for(int i=0; i < s.size(); i++){
        if(s[i] != '?' && a[i] == '?')
            a[i] = s[i];
        else if(s[i] == '?' && a[i] != '?')
            s[i] = a[i];
        else if(s[i] == '?' && a[i] == '?'){
            s[i] = 'a'; a[i] = 'a';
        } else if(s[i] != a[i])
            break;
    }

    cout << ((a == s)? s:"-1") << endl;
}