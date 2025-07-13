#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    int min = INT_MAX;
    int mini;
    
    for(int i=0; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            mini = i;
        }
    }

    cout << mini+1 << endl;
    return 0;
}