#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i=0; i<4; i++)
    {
        cin >> a[i];
    }
    int pos;
    for(int i = 0; i<4; i++)
    {
        if(a[i] == 1)
        {
            pos = i+1;
            break;
        }
    }
    cout << pos << endl;
    return 0;
}