#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    vector<int>a(5);
    for(int i =0; i<5; i++)
    {
        cin >> a[i];
    }  
      
    int cnt = 0;
    for(int i = 0; i<5; i++)
    {
        if(a[i] == x)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}