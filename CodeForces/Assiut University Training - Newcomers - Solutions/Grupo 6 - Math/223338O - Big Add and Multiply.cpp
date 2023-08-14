#include <bits/stdc++.h>

using namespace std;

string add(string n){
    string rest;
    int c, b, i, j;
    string n2 = "9999";

    i=n.size()-1;
    j=n2.size()-1;
    int r=0, d=0;

    for(; min(i, j) >= 0; i--, j--){
        c = n[i]-'0';
        b = n2[j]-'0';
        r = (c+b+d)%10;
        d = (c+b+d)/10;
        rest.push_back(r+'0');
    }

    string a;
    if(n.size() > n2.size()) a = n;
    else a = n2;

    i = max(i, j);

    while(i >= 0){
        c = a[i]-'0';
        if(d != 0){
            r = (c+d)%10;
            d = (c+d)/10;
            rest += (r+'0');
        }
        else {
            rest += (c+'0');
        }
        i--;
    }
    reverse(rest.begin(), rest.end());

    if(i < 0 && d != 0) rest = char(d+'0') + rest;
    
    return rest;
}

string mult(string n){
    if(n == "0") return "0";
    string n2 = "9999";

    reverse(n.begin(), n.end());
    reverse(n2.begin(), n2.end());

    if(n.size() < n2.size()){
        string s = n;
        n = n2;
        n2 = s;
    }

    string rest ="";
    for(int i=0; i < n.size(); i++)
        rest += "00";
     
    int c, b, r, d = 0, o, div = 0, res, k, t=0;

    for(int i=0; i < n2.size(); i++){
        for(int j = 0, k=i; j < n.size(); j++, k++){
            c = n[j]-'0';
            b = n2[i]-'0';

            r = (c*b+d)%10;
            d = (c*b+d)/10;
            
            o = (rest[k]-'0')+r+div;

            div = o/10;
            res = o%10;

            rest[k] = (res+'0');
            t = k+1;
        }
        if(d != 0){
            o = (rest[t]-'0')+d+div;
            div = o/10;
            res = o%10;
            rest[t] = (res+'0');
            d=0;
            t++;
        }
        while(div != 0){
            o = (rest[t]-'0')+div;
            div = o/10;
            res = o%10;
            rest[t] = (res+'0');
            t++;
        }
    }
    reverse(rest.begin(), rest.end());
    while(rest[0] == '0'){
        rest.erase(rest.begin()+0);
    }
    if(div != 0)
        rest = char(div+'0') + rest;
    return rest;
}

int main(){

    string n;
    cin >> n;

    cout << add(n) << "\n" << mult(n) << endl;
}