#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,l,t1,t2;
    cin >> l >> c;
    t1 = (l*c)+((l-1)*(c-1));
    t2 = 2*(c+l-2);
    cout << t1 << endl << t2 << endl;
    return 0;
}