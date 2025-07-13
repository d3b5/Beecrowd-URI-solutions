#include<bits/stdc++.h>
using namespace std;
int main()
{
    int col;
    cin >> col;
    char name;
    cin >> name;
    double M[12][12];

    for(int i = 0; i<12; i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin >> M[i][j];
        }
    }

    double sum = 0;
    for(int i = 0; i<12; i++)
    {
        sum += M[i][col];
    }

    double avg = sum/12.0;

    cout <<fixed << setprecision(1) << avg << endl;
    return 0;
}