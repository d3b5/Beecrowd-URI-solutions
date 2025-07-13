#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i = 0; i<6; i++)
    {
        cin >> a[i];
    }
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    for(int i = 0; i<5; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;            
        }
        else if(a[i] % 2 != 0)
        {
            odd++;
        }
        if(a[i] > 0)
        {
            pos++;
        }
        else if(a[i] < 0)
        {
            neg++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    
    return 0;
}