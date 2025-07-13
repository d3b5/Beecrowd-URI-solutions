#include<bits/stdc++.h>
using namespace std;
void fun(int a[], int n)
{
    for(int i =0; i< (n-1); i++)
    {
        for(int j = i+1; j <n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }            
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    int a[3];
    
    for(int i =0 ; i< 3; i++)
    {
        cin >> a[i];
    }
    //copy of og
    int b[3];
    for(int i =0 ; i< 3; i++)
    {
        b[i] = a[i];
    }
    fun(a,3);
    cout << endl;
    for(int i=0; i<3; i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}