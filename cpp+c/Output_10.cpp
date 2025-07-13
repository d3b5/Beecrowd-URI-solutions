#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x = 'A';
    int outer_spc = 7;
    int inner_spc = 1;
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=outer_spc; j++)//outer space 
        {
            cout << " " ;
        }     

        if(i == 1 || i == 9) cout << "A";
        else
        {
            if(i == 2 || i == 8) x = 'B';
            else if(i==3 || i == 7) x = 'C';
            else if(i==4 || i == 6) x = 'D';
            else if(i==5) x = 'E';
        }
        if(i != 1 && i != 9)
        {
            cout << x;
            for(int j=1; j<=inner_spc; j++)//inner space 
            {
                cout << " " ;
            }
            cout << x;
        }

        if(i<5) outer_spc--;
        else outer_spc++;

        if(i>1)
        {
            if(i<5) inner_spc+=2;
            else inner_spc-= 2;
        }

        cout << endl;
    }
    return 0;
}
