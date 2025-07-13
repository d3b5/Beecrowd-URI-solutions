#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int q,r;
    // a = dividend
    // b = divisor
    //q = quotient
    //r = reminder

    cin >> a >> b;
    q = a/b;
    r = a % b;

    cout << q << " " << r << endl;
    return 0;
}