#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,t1,t2,ans,d,h,m,s;
    string a1,del;
    cin >> a1 >> d1 >> h1 >> del >> m1 >> del >> s1;
    cin >> a1 >> d2 >> h2 >> del >> m2 >> del >> s2;

    t1 = s1 + m1*60 + h1*3600 + d1*86400;
    t2 = s2 + m2*60 + h2*3600 + d2*86400;
    ans = t2-t1;
    
    d = ans/86400;
    cout << d << " dia(s)" << endl;

    
    h = (ans -d*86400)/3600;
    cout << h << " hora(s)" << endl;

    m = (ans - d*86400 - h*3600)/60;
    cout << m << " minuto(s)" << endl;

    s = (ans - d*86400 - h*3600-m*60);
    cout << s << " segundo(s)" << endl;

        

    return 0;
}