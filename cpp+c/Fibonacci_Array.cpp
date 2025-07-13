//way 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int fib[61];
    long long int a,b,c;
    a = 0;
    b = 1;

    for(int i = 0; i<61; i++)
    {
        fib[i] = a;
        c = a+b;
        a = b;
        b = c;
    }

    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        int x;
        cin >> x;
        cout << "Fib(" << x << ") = " << fib[x] << endl;
    }
    return 0;
}