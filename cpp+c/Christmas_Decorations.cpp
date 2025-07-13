#include<bits/stdc++.h>
#define PI 3.141592654

using namespace std;
int main()
{
    double a,b,c;
    while(cin >> a >> b >> c)
    {
        cout << fixed << setprecision(2) <<5*(tan(PI*a/180)*b + c) << endl;
    }
    return 0;
}