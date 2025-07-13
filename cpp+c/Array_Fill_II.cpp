#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int>N(1000);

    int c = 0;
    for(int i=0; i<1000; i++)
    {
        cout << "N[" << i << "] = " << c << endl;
        c++;
        if(c == t) 
        {
            c = 0;
        }
    }
    return 0;
}