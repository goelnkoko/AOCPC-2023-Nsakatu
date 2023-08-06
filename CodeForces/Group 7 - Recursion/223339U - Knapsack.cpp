#include <bits/stdc++.h>

using namespace std;

int ks(int a[], int b[], int c[], int n, int w, int i){

    if(i == -1){
        int sum = 0, s = 0;
        for(int j=0; j < n; j++){
            if(c[j] == 1){
                s += a[j];
                if(s <= w)
                    sum += b[j];
                else 
                    break;
            }
        }
        return sum;
    }

    c[i] = 0;
    int k = ks(a, b, c, n, w, i-1);
    c[i] = 1;
    int s = ks(a, b, c, n, w, i-1);

    return max(k, s);
}

int main(){

    int n, w;
    cin >> n >> w;

    int a[n], b[n], c[n];

    for(int i=0; i < n; i++){
        cin >> a[i] >> b[i];
        c[i] = 0;
    }

    cout << ks(a, b, c, n, w, n) << endl;
}