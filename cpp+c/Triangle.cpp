#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int x;
    for(int i = 0; i < 4; i++) 
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[0]+ v[1] > v[2]) cout << "S" << endl;
    else if(v[0]+ v[2] > v[3]) cout << "S" << endl;
    else if(v[1]+ v[2] > v[3]) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}