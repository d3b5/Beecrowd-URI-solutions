#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    float sum = 0;
    int cnt = 0;

    while(true)
    {
        cin >> x;
        if(x > 0)
        {
            cnt++;
            sum += x;
        }
        else if(x < 0)
        {
            break;
        }
    }
    float avg = sum/cnt ;
    cout << fixed << setprecision(2) << avg << endl;
    return 0;
}