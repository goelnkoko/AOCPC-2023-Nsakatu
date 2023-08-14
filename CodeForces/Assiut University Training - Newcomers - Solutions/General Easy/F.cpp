#include <bits/stdc++.h>

using namespace std;

void snake(int n, int m){
    int c = 1;
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            if(i%2 == 0)
                cout << "#";
            else if(c%2 == 0)
                if(j == m-1) cout << "#";
                else cout << ".";
            else 
                if(j == 0) cout << "#";
                else cout << "."; 
        }
        if(i%2 == 0) c++;
        cout << endl;
    }
}

int main(){

    int n, m;
    cin >> n >> m;

    snake(n, m);    
}