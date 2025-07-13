#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,op,a_tot = 0,b_tot = 0,draw = 0,n = 0; // a for inter, b for germio, n is total games

    do
    {
        cin >> a >> b;
        if(a>b)a_tot++;
        else if (a<b) b_tot++;
        else draw++;
        n++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> op;
    } while(op == 1);

    cout << n << " grenais" << endl;
    cout << "Inter:" << a_tot << endl;
    cout << "Gremio:" << b_tot << endl;
    cout << "Empates:" << draw << endl;
    if(a>b) cout << "Inter venceu mais" << endl;
    else if(a<b) cout << "Gremio venceu mais" << endl;
    else cout << "Não houve vencedor" << endl;

    return 0;
}