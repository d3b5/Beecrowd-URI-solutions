#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int max = INT_MIN;
    int x;
    
    for(int i = 0; i<100; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i<100; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            x = i+1;
        }
    }

    cout << max << endl << x << endl;
    
    return 0;
}