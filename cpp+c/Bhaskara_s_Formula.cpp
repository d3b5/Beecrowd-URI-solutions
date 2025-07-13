#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,x1,x2,disc;

    cin >> a >> b >> c;
    disc = (b*b) - (4*a*c);

    if(disc < 0 || a == 0 || b == 0 || c == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        
        x1 = (- b - sqrt(disc)) / (2*a);
        x2 = (- b + sqrt(disc)) / (2*a);
        cout << fixed << setprecision(5) << "R1 = " << x2 << endl;
        cout <<  fixed << setprecision(5) <<"R2 = " << x1 << endl;
    }
    return 0;
}