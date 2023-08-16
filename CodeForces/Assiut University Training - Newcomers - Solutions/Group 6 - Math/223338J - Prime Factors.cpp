#include <bits/stdc++.h>
using namespace std;

vector<int> pr;
queue<int> prF;

void primeNumbers(int m){
    vector<bool> p (m, true);
    for(int i=2; i*i <= m; i++)
        if(p[i]){
            for(int j=i*i; j <= m; j += i)
                p[j] = false;
        }
    
    for(int i=2; i <= m; i++)
        if(p[i])
            pr.push_back(i);
}

void prfc(int n){
    int t = n;
    for(int i = 0; i < pr.size(); i++){
        if(n == 1) break;
        if(n % pr[i] == 0){
            prF.push(pr[i]);
            n /= pr[i];
            --i;
        }
    }
    
    if(n > 1 || t == 1)
        prF.push(t);
}

int main(){

    int n;
    cin >> n;
    primeNumbers(n);
    prfc(n);

    while(!prF.empty()){
        
        cout << "(" << prF.front() << "^";
        int i = 0, t = prF.front();
        while(!prF.empty())
            if(prF.front() == t){
                i++;
                prF.pop();
            } else break;
        cout << i << ")";
        if(prF.empty())
            cout << endl;
        else
            cout << "*";
    }
}