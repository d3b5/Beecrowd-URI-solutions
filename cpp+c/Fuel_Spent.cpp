#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v,t,fuel;
    cin >>  t >> v;
    fuel = (v*t)/12;
    cout << fixed << setprecision(3) << fuel <<endl;
    return 0;
}