#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    int carlos,raf,beto;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        raf = 9*pow(x,2)+pow(y,2);
        beto = 2*pow(x,2)+25*pow(y,2);
        carlos = -100*x+pow(y,3);
        if(raf >= beto && raf>=carlos) cout << "Rafael ganhou" << endl;
        else if(beto >= raf && beto>=carlos) cout << "Beto ganhou" << endl;
        else cout << "Carlos ganhou" << endl;
    }
    return 0;
}