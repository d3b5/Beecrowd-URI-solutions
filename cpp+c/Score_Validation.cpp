#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b;

    while(a<0 || a>10)
    {
        cout << "nota invalida" << endl;
        cin >> a;        
    }
    while (b<0 || b>10)
    {
        cout << "nota invalida" << endl;
        cin >> b; 
    }
    c = (a+b)/2;
    cout << "media = " << fixed << setprecision(2)<< c << endl;
    
    return 0;
}