#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while(t--)
    {
        cin >> n;
        if(n%2 == 0) cout << "0" << endl;
        else cout << "1" << endl;
    }
    return 0;
}