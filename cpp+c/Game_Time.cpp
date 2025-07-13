#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t;
    cin >> x >>y;

    if (x == y)
    {
        t = 24;
    }
    else if (y < 12)
    {
       t = (24-x) + y;
    }
    else if (y <24)
    {
        t = abs(y-x);
    }
    //t = abs(y-x);

    cout << "O JOGO DUROU " << t << " HORA(S)" << endl;
    return 0;
}