#include <bits/stdc++.h>

using namespace std;

void mult(int** a, int** b, int** c, int n, int m, int m2){

    for(int i=0; i < n; i++)
        for(int j=0; j < m2; j++){
            c[i][j] = 0;
            for(int k=0; k < m; k++)
                c[i][j] += a[i][k]*b[k][j];
        }        
}

int main(){
    int n, m, n2, m2;

    cin >> n >> m;
    int** a = new int*[n];
    for(int i=0; i < n; i++)
        a[i] = new int[m];

    for(int i = 0; i < n; i++)
        for(int j=0; j < m; j++)
            cin >> a[i][j];

    cin >> n2 >> m2;
    int** b = new int*[n2];
    for(int i=0; i < n2; i++)
        b[i] = new int[m2];

    for(int i = 0; i < n2; i++)
        for(int j=0; j < m2; j++)
            cin >> b[i][j];

    int** c = new int*[n];
    for(int i=0; i < n; i++)
        c[i] = new int[m2];

    mult(a, b, c, n, m, m2);

    for(int i=0; i < n; i++){
        for(int j=0; j < m2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}