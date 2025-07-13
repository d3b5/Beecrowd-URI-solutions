#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,w,b;
    cin >> t;

    while(t--)
    {
        cin >> h >> w >> b;
        if((h >= 200 && h <= 300) && w >= 50 && b >= 150) cout << "Sim" << endl;
        else cout << "Nao" << endl;
    }
    return 0;
}