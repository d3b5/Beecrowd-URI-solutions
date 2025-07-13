#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,p,y;
    cin >> x ;
    
    if(x >= 0.0 && x <= 400.0)
    {
        p = 0.15;
        y = x + x*p;
    }
    else if(x >= 400.01 && x <= 800.0)
    {
        p = 0.12;
        y = x + x*p;
    }
    else if(x >= 800.01 && x <= 1200.0)
    {
        p = 0.1;
        y = x + x*p;
    }
    else if(x >= 1200.01 && x <= 2000.0)
    {
        p = 0.07;
        y = x + x*p;
    }
    else if(x > 2000.0)
    {
        p = 0.04;
        y = x + x*p;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << y << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (y - x) << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << p*100 << " %" << endl;
    
    return 0;
}