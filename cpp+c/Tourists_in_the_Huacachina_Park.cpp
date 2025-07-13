#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b, sum = 0,jeep = 0;
    
    while(true)
    {
        cin >> a >> b;
        if(a == "ABEND") break;
        if(a == "SALIDA")
        {
            jeep++;
            sum += b;
        }
        else if (a == "VUELTA")
        {
            jeep--;
            sum -= b;
        }
    }
    cout << abs(sum) << endl << abs(jeep) << endl;
    return 0;
}