#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr);

using namespace std;

bool ln(int n, int d = 0){
    if(d > n)
        return false;
    if(d != 0)
        if(n %d == 0)
            return true;

    return ln(n, d*10+4) || ln(n, d*10+7);
}

int main(){

    int n;
    cin >> n;
   
    cout << (ln(n)? "YES":"NO") << endl;
}