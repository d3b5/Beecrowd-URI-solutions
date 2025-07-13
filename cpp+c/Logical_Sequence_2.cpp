#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,line,row;
    cin >> a >> n;
    line = n/a;
    row = a;

    int m = 1;
    for(int i = 1; i<=line; i++)
    {   
        cout << m;
        for(int j = m+1; j <= row; j++)
        {
            cout<< " " << j;
        }
        cout << endl;
        m +=a;
        row += a;

    }
    return 0;
}