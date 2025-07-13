#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; // n in sec
    cin >> n;
    int hr,min,sec;
    hr = n/3600;
    min = (n -(hr*3600)) /60;
    sec = (n -(hr*3600) - (min*60));

    cout<< hr << ":" << min << ":" << sec <<endl;
    return 0;
}