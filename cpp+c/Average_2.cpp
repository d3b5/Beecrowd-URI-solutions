#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin >> a >> b >> c ;
    a = a*2;
    b = b*3;
    c = c*5;

    d = (a+b+c) / 10;
    cout <<"MEDIA = " << fixed << setprecision(1) << d <<endl;
    return 0;
}