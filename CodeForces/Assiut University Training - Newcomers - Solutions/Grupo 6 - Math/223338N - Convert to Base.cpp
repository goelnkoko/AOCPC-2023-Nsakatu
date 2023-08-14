#include <bits/stdc++.h>
#define ll long long

using namespace std;

void p(int x){
    if(x < 10)
        cout << x;
    else {
        char c = ('A' + x -10);
        cout << c;
    }
}

ll num(char a){
    if(a <= '9')
        return a-'0';
    return (a-'A')+10;
}

ll toD(string s, int b, int i){
    if(i == s.size())
        return 0;

    int n = num(s[i]);
    return n*pow(b, i) + toD(s, b, i+1);
}

void toB(ll n, ll b){
    if(n < b){
        p(n);
        return;
    }
    toB(n/b, b);
    p(n%b);            
}


int main(){
    int t, n, b;
    string s;
    cin >> t;
    
    if(t == 1){
        cin >> s >> b;
        reverse(s.begin(), s.end());
        cout << toD(s, b, 0) << endl;
    }
    else {
        cin >> n >> b;
        toB(n, b);
        cout << endl;
    }
}