#include<bits/stdc++.h>
using namespace std;
bool binary_search(int a[],int n,int l,int r,int val)
{
    if (l > r) return false; 
    int mid = (l+r)/2;
    if (a[mid] == val) return true;
    if(a[mid] > val) return binary_search(a,n,l,mid-1,val);
    else return binary_search(a,n,mid+1,r,val);
}
int main()
{
    int n,val;
    cin >> n >> val;

    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    if(binary_search(a,n,0,n-1,val)) cout << "FOUND" << endl;
    else cout << "NOT FOUND" << endl;
    return 0;
}