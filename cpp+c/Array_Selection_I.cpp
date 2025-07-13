#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[100];
    
    for(int i =0; i<100; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 0; i<100; i++)
    {
        if(a[i] <= 10)
        {
            cout << "A[" << i << "] = " << fixed << setprecision(1) <<a[i] << endl;
        }
        
    }
    return 0;
}