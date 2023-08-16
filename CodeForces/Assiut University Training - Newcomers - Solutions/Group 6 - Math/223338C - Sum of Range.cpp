#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sumN = 0;
ll sumE =0;
ll sumO =0;

void sum(ll a, ll b){

    sumN = ((a+b)*(b-a+1))/2;
    if(a%2 == 0)
        if(b%2 == 0)
            sumE = ((a+b)*((b-a)/2+1))/2;
        else 
            sumE = ((a+b-1)*((b-a-1)/2+1))/2;
    else 
        if(b%2 == 0)
            sumE = ((a+1+b)*((b-a-1)/2+1))/2;
        else 
            sumE = ((a+b)*((b-a)/2))/2;

    sumO = sumN - sumE;
}

int main(){
    ll a, b;
    cin >> a >> b;

    sum(min(a, b), max(a, b));

    cout << sumN << endl;
    cout << sumE << endl;
    cout << sumO << endl;

}