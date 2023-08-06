#include <bits/stdc++.h>
using namespace std;

long long maxS(int** a, int i, int j, int sum){

    if(i == 0 && j == 0)
        return sum + a[0][0];

    if(i == -1 || j == -1)
        return INT_MIN;

    int si, sj;
    si = maxS(a, i-1, j, sum+a[i][j]);
    sj = maxS(a, i, j-1, sum+a[i][j]);

    return max(si, sj);
}

int main(){

    int n, m;
    cin >> n >> m;
    
    int** a = new int*[n];
    for(int i=0; i < n; i++)
        a[i] =  new int[m];

    for(int i=0; i < n; i++)
        for(int j=0; j < m; j++)
            cin >> a[i][j];

    cout << maxS(a, n-1, m-1, 0) << endl;
}