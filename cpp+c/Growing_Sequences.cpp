#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;

    while(true)
    {
        cin >> x;
        if(x == 0)
        {
            break;
        }
        else
        {
            for(int i = 1; i<=x ; i++ )
            {
                cout<< i;
                if( i != x)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}