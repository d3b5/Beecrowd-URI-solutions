#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string a,b;
    while(t--)
    {
        cin >> a>> b;
        if(a.size() < b.size())
        {
            cout << "nao encaixa" << endl;
            continue;
        }
        int n= b.size();
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(a[a.size()-1-i] != b[b.size()-1-i])
            {
                flag = false;
                break;
            }
        }
        if(flag == true) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    return 0;
}