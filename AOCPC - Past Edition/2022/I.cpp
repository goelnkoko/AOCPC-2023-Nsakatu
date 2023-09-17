#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);
using namespace std;
int main(){
    ll t, n, a;

    cin>>t;
    while(t--){
        ll  s = 0;
        cin>>n;
        for(int i  = 0; i < n; ++i){
            cin>>a;
            if(a == 0) a = 1;
            s += abs(a);
        }
        cout <<s<<endl;
    }

    return 0;
}
