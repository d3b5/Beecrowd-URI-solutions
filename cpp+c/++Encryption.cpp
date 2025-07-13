#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    
    int len = a.size();

    for(int i = 0; i< len; i++)
    {
        if(isalpha(a[i]))
        {
            a[i] = a[i] + 3;
        }
    }

    reverse(a.begin(), a.end());

    for(int i = 0; i< (len/2); i++)
    {
        a[i] = a[i] -1 ;
    }

    cout << a << endl;
    return 0;
}