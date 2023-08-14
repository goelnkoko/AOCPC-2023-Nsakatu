#include <bits/stdc++.h>
using namespace std;

int main(){

    int r, c, cont=0;
    bool aux;
    cin >> r >> c;
    char tb[r][c];

    for(int i=0; i < r; i++){
        aux = true;
        for(int j=0; j < c; j++){
            cin >> tb[i][j];
            if(tb[i][j] == 'S') aux = false; 
        }
        if(aux) cont += c;
    }
    int eat = cont/c;

    for(int j=0; j < c; j++){
        aux = true;
        for(int i=0; i < r; i++){
            if(tb[i][j] == 'S') {aux = false; break;}
        }
        if(aux) cont += (r - eat);
    }

    cout << cont << endl;
}