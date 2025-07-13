#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    double N[100];

    for(int i = 0; i<100; i++)
    {
        N[i] = x;
        x=x/2;
    } 

    for(int i = 0; i<100; i++)
    {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
    } 
    return 0;
}