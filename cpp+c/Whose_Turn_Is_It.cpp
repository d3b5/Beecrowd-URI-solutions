#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string a1,a2,b1,b2;
    long long int c,d;

    while(t--)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c >> d;

        if((c+d)%2 == 0)
        {
            if(a2 == "PAR") cout << a1 << endl;
            else cout << b1 << endl;
        }
        else
        {
            if (a2 == "IMPAR") cout << a1 << endl;
            else cout << b1 << endl;
        }
    }

    return 0;
}