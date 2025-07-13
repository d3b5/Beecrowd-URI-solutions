#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,op,avg;

    while(true)
    {
        cin >> a ;
        while(a < 0 || a > 10)
        {
            cout << "nota invalida" << endl;
            cin >> a;
        }

        cin >> b;
        while(b < 0 || b > 10)
        {
            cout << "nota invalida" << endl;
            cin >> b;
        }

        avg = (a+b)/2;
        cout << "media = " << fixed << setprecision(2) << avg << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;

        cin >> op;
        while(op != 1 && op != 2)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> op;
        }
        if(op == 1) continue;
        else break;
    }
    return 0;
}