#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,sum = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if(a-d <0) sum += d-a;
    if(b-e <0) sum += e-b;
    if(c-f <0) sum += f-c;
   cout << sum << endl;
    return 0;
}