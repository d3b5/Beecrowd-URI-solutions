#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int num = sqrt(n);
    vector<int>a;

    for(int i = 1; i<=num; i++)
    {
        if(n % i == 0)
        {
            a.push_back(i);
            a.push_back(n/i);
        }
    }
    sort(a.begin(), a.end());
    
    for(int i = 0; i<a.size(); i++)
    {
        if(a[i] != 0)
        {
            cout << a[i] << endl;
        }
    }
    return 0;
}