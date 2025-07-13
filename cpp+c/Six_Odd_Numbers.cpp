#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; 
    int cnt = 0;
    cin >> x;

    for(int i = x; cnt <6 ; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << endl;
            cnt++;

        }
    }
    return 0;
}