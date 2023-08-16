#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char a;
    cin >> a;

    if(isdigit(a)) cout << "IS DIGIT" << endl;
    if(isalpha(a)) {
        cout << "ALPHA" << endl;
        if(isupper(a)) cout << "IS CAPITAL" << endl;
        if(islower(a)) cout << "IS SMALL" << endl;
    }
}