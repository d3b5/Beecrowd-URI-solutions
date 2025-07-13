#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;

    double fir,sec,thir;

    if(a >= b && a >=c)
    {
        fir = a;
        if(b>c)
        {
            sec = b;
            thir = c; 
        }
        else
        {
            sec = c;
            thir = b; 
        }
    }
    else if(b >= a && b >=c)
    {
        fir = b;
        if(a>c)
        {
            sec = a;
            thir = c; 
        }
        else
        {
            sec = c;
            thir = a; 
        }
    }
    else
    {
        fir = c;
        if(a>b)
        {
            sec = a;
            thir = b; 
        }
        else
        {
            sec = b;
            thir = a; 
        }
    }

    if ( fir >= (sec + thir))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if( (fir*fir) == (sec*sec) + (thir*thir))
    {
        cout << "TRIANGULO RETANGULO" <<endl;
    }
    else if((fir*fir) > (sec*sec) + (thir*thir))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if((fir*fir) < (sec*sec) + (thir*thir))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(  a== b && b == c)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if( a == b || b == c || c == a )
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}