#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,b;
    cin >> n;
    a = n/log(n);
    b = a*1.25506;
    cout << fixed << setprecision(1) << a << " " <<  fixed << setprecision(1) << b << endl;
    return 0;
}