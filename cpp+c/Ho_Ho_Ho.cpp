#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cout<< "Ho";
        if(i !=n)
        {
            cout << " ";
        }
        if(i == n)
        {
            cout << "!";
        }
    }
    cout<< endl;
    return 0;
}