#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ini,actions;
    cin >> ini >> actions;
    string a;
    for(int i = 1; i<=actions; i++)
    {
        cin >> a;
        if(a == "fechou")
        {
            ini++;
        }
        else
        {
            ini--;
        }
    }
    cout << ini << endl;
    return 0;
}