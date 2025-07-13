#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start_h,start_m, end_h, end_m,h,m;
    cin >> start_h >> start_m >> end_h >> end_m;

    if( start_h == end_h && start_m == end_m) 
    {
        h = 24;
        m = 0;
    }
    else if(end_m >= start_m)
    {
        m = end_m - start_m;
        if(end_h >= start_h)
        {
            h = end_h - start_h;
        }
        else
        {
            h = (end_h+24) - start_h;
        }
    }
    else if(end_m < start_m)
    {
        m = (end_m+60) - start_m;
        end_h -=1;
        if(end_h >= start_h)
        {
            h = end_h - start_h;
        }
        else
        {
            h = (end_h+24) - start_h;
        }
    }

    cout << "O JOGO DUROU " << h << " HORA(S) E "<< m << " MINUTO(S)" << endl;
    return 0;
}