#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double d;
    cin >> d;
    double pi = 3.141592653;
    cout << fixed << setprecision(9);
    cout << pi*d*d << endl;
    
}