#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N[20];

    for(int i = 0; i<20; i++)
    {
        cin >> N[i];
    }

    int j = 19;
    for(int i = 0; i<20; i++)
    {
        if(j>i)
        {
            swap(N[i],N[j]);
            j--;
        }
        else
        {
            break;
        }
        
    }
    for(int i = 0; i<20; i++)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}