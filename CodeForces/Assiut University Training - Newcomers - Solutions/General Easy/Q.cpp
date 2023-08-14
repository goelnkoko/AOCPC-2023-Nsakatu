#include <bits/stdc++.h>

using namespace std;

int main(){

    int sum = 0;
    char pos = 'a';
    string s;
    cin >> s;

    for(int i=0; i < s.size(); i++){
        char M = max(pos, s[i]);
        char m = min(pos, s[i]);

        int d = M - m;

        if(d <= 13)
            sum += d;
        else 
            sum += 26-d;
        
        pos = s[i];
    }

    cout << sum << endl;
}