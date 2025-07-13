#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for(int j = 1; j<=t; j++)
    {
        int n;
        cin >> n;
        int flag = 1;
        for(int i = 1; i<= sqrt(n); i++)
        {
            if(i == 1) continue;
            else if(n % i == 0)
            {   
                flag = 0;
                break;
            }                 
        }
        
        if(flag == 1)
        {
            cout << n << " eh primo"<<endl;
        }
        else
        {
            cout<< n << " nao eh primo"<<endl;
        }        
    }

    return 0;
}