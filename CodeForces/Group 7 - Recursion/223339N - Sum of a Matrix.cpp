#include <bits/stdc++.h>

using namespace std;

void sumM(int** a, int** b, int** c, int r, int co, int col){
    if(co == -1){
        --r;
        co = col-1;
    }
    if(r == -1)
        return;

    c[r][co] = a[r][co] + b[r][co];
    sumM(a, b, c, r, --co, col);
}

int main(){
    int r, c;
    cin >> r >> c;

    int** a = new int*[r];
    int** b = new int*[r];
    int** t = new int*[r];
    for(int i=0; i < r; i++){
        a[i] = new int[c];
        b[i] = new int[c];
        t[i] = new int[c];
    }

    for(int i=0; i < r; i++)
        for(int j=0; j < c; j++)
            cin >> a[i][j];

    for(int i=0; i < r; i++)
        for(int j=0; j < c; j++)
            cin >> b[i][j];

    sumM(a, b, t, r-1, c-1, c);

    for(int i=0; i < r; i++){
        for(int j=0; j < c; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}