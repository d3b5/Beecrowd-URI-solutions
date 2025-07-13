#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,id,a,b,cnt=0;
    cin >> t >> id;
    while(t--)
    {
        cin >> a >> b;
        if(a == id && b == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}