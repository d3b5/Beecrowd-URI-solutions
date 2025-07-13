#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for(int j = 1; j<=t; j++)
    {
        int pa,pb,year;
        double ra,rb;

        cin >> pa >> pb >> ra >> rb;

        year = 0;

        while(true)
        {
            pa += (pa*ra/100.00);
            pb += (pb*rb/100.00);
            year++;

            if(year > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
            if(pa>pb)
            {
                cout<< year << " anos." << endl;  
                break;
            }      
        }
    }

    return 0;
}

