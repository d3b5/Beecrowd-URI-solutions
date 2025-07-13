#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    int min = INT_MAX;
    int pos;

    for(int i = 0; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}