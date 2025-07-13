#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    bool flag;
    cin >> a >> b >> c;

    if(a>b && b<=c) flag = true;
    else if((a<b && b<c) && ((b-a) <= (c-b))) flag = true;
    else if((a>b && b>c) && ((a-b) > (b-c))) flag = true;
    else if (a==b && b<c) flag = true;
    else flag = false;

    if(flag) cout << ":)" << endl;
    else cout << ":(" << endl;
    return 0;
}