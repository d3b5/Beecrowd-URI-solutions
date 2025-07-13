#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,pi,vol;
    pi = 3.14159;
    cin >> r ;
    vol = (4/3.0)*pi*r*r*r;

    cout << "VOLUME = " << fixed << setprecision(3) << vol << endl;
    return 0;
}