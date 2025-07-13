#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,max,min2s,area,perim;
    cin >> a >> b >> c;

    if(a >= b && a >=c)
    {
        max = a;
        min2s = b+c;
    }
    else if(b >= a && b >=c)
    {
        max = b;
        min2s = a+c;
    }
    else
    {
        max = c;
        min2s = a+b;
    }

    if(max < min2s)
    {
        perim = a+b+c;
        cout << "Perimetro = " <<fixed << setprecision(1) << perim << endl;
    }
    else
    {
        area = ((a+b)*c)/2;
        cout << "Area = " << fixed << setprecision(1) <<area << endl;
    }
    return 0;
}