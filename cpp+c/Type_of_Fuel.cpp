#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int alc = 0;
    int gas = 0;
    int dsl = 0;

    do
    {
        cin >> x;
        //1. Alcohol 2. Gasoline 3. Diesel 4. end
        if(x== 1) alc++;
        else if ( x== 2) gas++;
        else if ( x == 3) dsl++;
        else if (x==4) break;
    } 
    while( x != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout <<  "Gasolina: " << gas << endl;
    cout << "Diesel: " << dsl << endl;
    return 0;
}