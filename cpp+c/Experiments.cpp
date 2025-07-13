#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    float total = 0;

    float coe = 0;
    float rato = 0;
    float sapo = 0;


    for(int i = 1; i<=t; i++)
    {
        int a;
        char b;
        cin >> a >> b;

        if(b == 'C')
        {
            coe += a;
        }
        else if( b == 'R')
        {
            rato += a;
        }
        else if( b == 'S')
        {
            sapo += a;
        }
    }

    total = coe + rato + sapo;

    float p_c = (coe*100)/total;
    float p_r = (rato*100)/total;
    float p_s = (sapo*100)/total;

    cout << "Total: " << total << " cobaias" << endl;
    cout<< "Total de coelhos: " << coe << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << p_c << " %"<< endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) <<  p_r << " %"<< endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) <<  p_s << " %"<< endl;

    return 0;
}