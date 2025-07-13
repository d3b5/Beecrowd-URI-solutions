#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d;
    cin >> t;
    string h,m;
    while(t--)
    {
        cin >> h >> m >> d;
        if(h.size() == 1) 
        {
            char temp = h[0];
            h[0] = '0';
            h.push_back(temp);
        }
        if(m.size() == 1) 
        {
            char temp = m[0];
            m[0] = '0';
            m.push_back(temp);
        }

        cout << h << ":" << m << " - A porta ";
        if(d == 1) printf("abriu!\n");
        else printf("fechou!\n");
    }
    return 0;
}