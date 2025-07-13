#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,tax;
    cin >> n;

    if( n>=00 && n<=2000.0)
    {
        tax = 0;
    }
    else if ( n>= 2000.01 && n<= 3000.0)
    {
        tax = ((n-2000)*0.08);       
    }
    else if ( n>= 3000.01 && n<= 4500.0 )
    {
        tax = ((n-3000)*0.18) +(1000*0.08);
    }
    else if( n> 4500 )
    {
        tax = ((n-4500)*0.28)+(1500*0.18)+(1000*0.08);
    }

    if(tax == 0)
    {
        cout << "Isento" << endl;
    }
    else
    {
        printf("R$ %.2lf\n",tax);
    }
    return 0;
}