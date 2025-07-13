#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin >> x;
    //[0,25] (25,50], (50,75], (75,100]
    if( x < 0 || x > 100)
    {
        cout << "Fora de intervalo" << endl;
    }
    else
    {
        if(x >=0 && x<= 25)
        {
            cout << "Intervalo [0,25]" <<endl;
        }
        else if( x> 25 && x<=50)
        {
            cout << "Intervalo (25,50]" << endl;
        }
        else if( x>75 && x<= 100)
        {
            cout << "Intervalo (75,100]" << endl;
        }
        
    }
    return 0;
}