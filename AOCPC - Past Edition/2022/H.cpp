
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //int r = lcm(a, b);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l,h;
        cin>>l>>h;
    int r = lcm(a, b);

        if(l<= r && r<=h)
            cout<<r<<endl;
            else
            cout<<-1<<endl;
    }

return 0;

}
