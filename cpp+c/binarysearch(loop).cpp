#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,val,mid,l,r;
    cin >> n >> val;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    bool flag = false;

    l = 0;
    r = n-1;
    sort(a, a+n);
    while(l<=r)
    {
        mid = (l+r)/2;
        if(a[mid] == val)
        {
            flag = true;
            break;
        }
        else if(a[mid] > val) r = mid -1;
        else l = mid+1;
    }

    if(flag == true) cout << "FOUND" << endl;
    else cout << "NOT FOUND" << endl;
    
    return 0;
}