#include <bits/stdc++.h>
using namespace std;

bool is_v(char c){
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O'  || c == 'u' || c == 'U')
        return true;
    else
        return false;
}

int cont(string s, int i){
    if(i == -1)
        return 0;

    if(is_v(s[i]))
        return 1 + cont(s, i-1);
    else
        return cont(s, i-1);
}

int main(){

    string s;
    getline(cin, s);

    cout << cont(s, s.size()-1);

}