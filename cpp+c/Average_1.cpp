#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b;
    a = a*3.5;
    b = b*7.5;

    c = (a+b)/(3.5+7.5)  ;

    cout << "MEDIA = " << fixed << setprecision(5)<< c <<endl;

    return 0;
}