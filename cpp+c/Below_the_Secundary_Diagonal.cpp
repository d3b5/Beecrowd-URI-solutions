#include<bits/stdc++.h>
using namespace std;
int main()
{   
    char vae;
    cin >> vae;
    double m[12][12];

    for(int i = 0; i<12; i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin >> m[i][j];
        }
    }

    double sum = 0;
    for(int i = 0; i<12; i++ )
    {
        for(int j = 0; j<12; j++)
        {
            if(i + j > 11)
            {
                sum += m[i][j];
            }
        }
    }

    double avg = sum/66.0;

    if(vae == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}