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
        int sum = 0;

        for(int i = 1; i< sqrt(n); i++)
        {
            if(n % i == 0)
            {
                sum += i + (n/i);
            }
        }
        
        sum = sum - n;
        if(sum == n)
        {
            cout << n << " eh perfeito" << endl;
        }
        else
        {
            cout << n << " nao eh perfeito" << endl;
        }
    }

    return 0;
}