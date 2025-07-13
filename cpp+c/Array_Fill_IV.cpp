#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15];
    for(int i=0; i<15; i++) cin >> a[i];

    //int ie = 0; io = 0;

    vector<int>odd;
    vector<int>even;

    for(int i=0; i<15; i++)
    {
        if(a[i]%2 == 0) even.push_back(a[i]);
        else odd.push_back(a[i]); 

        if(odd.size() == 5)
        {
            for(int j = 0; j<5; j++)
            {
                printf("impar[%d] = %d\n",j,odd[j]);
                odd.pop_back();
            }
        }
        if(even.size() == 5)
        {
            for(int j = 0; j<5; j++)
            {
                printf("par[%d] = %d\n",j,even[j]);
                even.pop_back();
            }
        }
    }
    int j = 0;
    while(!odd.empty())
    {
        printf("impar[%d] = %d\n",j,odd[j]);
        j++;
        odd.pop_back();
    }
    j = 0;
    while(!even.empty())
    {
        printf("par[%d] = %d\n",j,even[j]);
        j++;
        even.pop_back();
    }

    
    return 0;
}