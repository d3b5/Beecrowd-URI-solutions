#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a,b,c;
    a = 0;
    b = 1;

    for(int i=1; i<=n; i++)
    {
        cout << a;
        c = a + b;
        a = b;
        b = c;
        if(i != n) 
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}