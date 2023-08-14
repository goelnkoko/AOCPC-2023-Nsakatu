#include <bits/stdc++.h>

using namespace std;

double sum(double a[], int i){

    if(i == -1)
        return 0;

    return a[i]+sum(a, i-1);
}

double avg(double a[], int i){
    return sum(a, i-1)/i;
}

int main(){

    int n;
    cin >> n;

    double a[n];

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    cout << setprecision(6) << fixed << avg(a, n) << endl;

}