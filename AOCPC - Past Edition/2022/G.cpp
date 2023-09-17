#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    fast;
    freopen("G.in", "r", stdin);
    int t, n, x, y;
    cin>>t;
    cin>>n>>x>>y;

    if(n > y) cout <<"too fast"<<endl;
    else if(n < x) cout <<"too slow"<<endl;
    else cout <<"just right"<<endl;

    return 0;

}
