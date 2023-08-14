#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int main(){
    fast;
    int a, b, sa = 0, sb = 0;
    int a1, b1;

    cin>>a>>b;

    for(int i = 0; i < a; ++i){
        cin>>a1;
        sa += a1;
    }

    for(int j = 0; j < b; ++j){
        cin>>b1;
        sb += b1;
    }

    cout << ((sa == sb)? "Yes":"No") << endl;;

}