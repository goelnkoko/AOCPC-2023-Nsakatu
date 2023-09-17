#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
long long poss(int n, vector<long long> vet){
    long long result;
    for(int i= 1; i<n; i++){
        result =__gcd(vet[0],vet[i]);
    }
    if(result == 1 )
    return n-1;
    else
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector <long long> vet(n);
    for(int i=0;i<n;i++){
        cin>>vet[i];
    }

    cout <<poss(n,vet)<<endl;
}
    return 0;

}
