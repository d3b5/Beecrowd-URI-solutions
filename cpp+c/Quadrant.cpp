#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    
    while(true)
    {
        cin >> a >> b;
        if(a == 0 || b == 0)
        {
            break;
        }
        else if(a > 0)
        {
            if(b>0)
            {
                cout << "primeiro" << endl;
            }
            else{
                cout << "quarto" << endl;
            }
        }
        else 
        {
            if(b>0)
            {
                cout << "segundo" << endl;
            }
            else{
                cout << "terceiro" << endl;
            }
        }
    }
    return 0;
}