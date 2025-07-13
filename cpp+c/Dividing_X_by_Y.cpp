#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        float a,b,c;
        cin >>a >>b;
        
        if( b == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            c = a / b;
            cout << fixed << setprecision(1) << c << endl;
        }
        

    }
    return 0;
}