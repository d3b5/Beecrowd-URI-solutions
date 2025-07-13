#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int cnt = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i] == '1') cnt++;        
    }
    if(cnt % 2 == 0) a.push_back('0');
    else a.push_back('1');
    cout << a << endl;
    return 0;
}