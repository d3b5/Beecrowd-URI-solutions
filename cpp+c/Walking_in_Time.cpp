#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b || b == c || c == a) cout << "S" << endl;
    else if(abs(a-b) == c || abs(b-c) == a || abs(c-a) == b) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}