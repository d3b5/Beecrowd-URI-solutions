#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[6];
    for(int i = 0; i<6; i++)
    {
        cin >> a[i];
    }
    int pos = 0;
    float sum = 0.0;
    for(int i = 0; i<6; i++)
    {
        if(a[i] > 0)
        {
            pos++;
            sum += a[i];
        }
    }
    double avg = sum / pos;
    cout<< pos << " valores positivos" << endl;
    cout << fixed<< setprecision(1)<< avg << endl;
    return 0;
}