#include <bits/stdc++.h>

using namespace std;

string add(string s1, string s2){
    string r;

    int s1_t = s1.size();
    int s2_t = s2.size();
    int M = max(s1_t, s2_t);

    for(int i=min(s1_t, s2_t); i <= M; i++){
        if(i >= s1_t) s1.insert(s1.begin(), '0');
        if(i >= s2_t) s2.insert(s2.begin(), '0');
    }

    int last = 0;
    for(int i=M; i >= 0; i--){
        int sum = (s1[i]-'0') + (s2[i]-'0') + last;
        last = sum/10;
        r.insert(r.begin(), sum%10+'0');
    }

    while(r[0] == '0')
        r.erase(r.begin());
    
    return r;
}

string multiply(string s1, string s2){ 
    string r;

    int s1_t = s1.size();
    int s2_t = s2.size();
    int M = max(s1_t, s2_t);

    for(int i=min(s1_t, s2_t); i <= M; i++){
        if(i >= s1_t) s1.insert(s1.begin(), '0');
        if(i >= s2_t) s2.insert(s2.begin(), '0');
    }
    for(int i=0; i <= M; i++)
        r += "00";
    
    int last = 0, res = 0, k, t = r.size()-1;

    for(int i=M; i >= 0; i--){
        for(int j=M, k=t; j >= 0; j--, k--){
            int mult = (s1[i]-'0')*(s2[j]-'0') + last;
            last = mult/10;
            int sum = (mult%10)+(r[k]-'0')+res;
            res = sum/10;
            r[k] = sum%10+'0';
        }
        t--;
    }

    while(r[0] == '0')
        r.erase(r.begin());

    return r;
}

int main(){

    string s1, s2;
    cin >> s1;

    cout << add(s1, "9999") << "\n" << multiply(s1, "9999")<< endl;
}