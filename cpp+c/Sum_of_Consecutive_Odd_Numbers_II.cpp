#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for(int j = 1; j <=t; j++)
    {
            int a,b,min,max;
        cin >> a >> b;

        if(a>=b)
        {
            max = a;
            min = b; 
        }
        else
        {
            max = b;
            min = a;
        }
        int sum = 0;
        for(int i = (min+1); i < max; i++)
        {
            if(i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}