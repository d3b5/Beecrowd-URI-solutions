#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin >> x >> y;

    if ( x == 0 && y == 0)
    {
        cout << "Origem" << endl;
    }
    else if( x == 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if( y == 0)
    {
        cout << "Eixo X" <<endl;
    }
    else if(x > 0)
    {
        if(y>0)
        {
            cout << "Q1" << endl;
        }
        else
        {
            cout << "Q4" << endl;
        }
    }
    else
    {
        if(y>0)
        {
            cout << "Q2" << endl;
        }
        else
        {
            cout << "Q3" << endl;
        }
    }
    return 0;
}