#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int x;
    cin >> x;

    int j = 0;
    while(j<10)
    {
        a[j] = x;
        x = x*2;
        j++;
    }
    
    for(int i = 0; i<10; i++)
    {
        cout << "N[" << i << "] = " << a[i] << endl;
    }
    return 0;
}