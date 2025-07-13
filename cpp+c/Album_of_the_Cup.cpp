#include<bits/stdc++.h>
using namespace std;
bool findcard(int a[],int n,int val)
{
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(a[i] == val) 
        {
            flag = true;
            break;
        }
    }
    return flag;
}
int main()
{
    int n,a,x;
    cin >> n >> a;

    int total[n];
    set<int>buy;

    for(int i=0; i<a; i++) 
    {
        cin >> x;
        buy.insert(x);
    }
    

    for(int i=0; i<n; i++) total[i] = i+1;

    int cnt = 0;

    for (auto it = buy.begin(); it != buy.end(); ++it) 
    {
        if(findcard(total,n,*it) == true) cnt++;
    }
    int need = n - cnt; 
    cout << need << endl;

    return 0;
}