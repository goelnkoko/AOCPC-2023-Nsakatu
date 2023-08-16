#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char a;
    cin >> a;

    if(isupper(a)) cout << char(tolower(a)) << endl;
    if(islower(a)) cout << char(toupper(a)) << endl;

}