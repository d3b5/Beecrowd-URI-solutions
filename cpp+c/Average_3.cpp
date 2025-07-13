#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n1,n2,n3,n4,n5,avg1,avg2;
    cin >> n1 >> n2 >> n3 >> n4;

    n1 = n1*2;
    n2 = n2*3;
    n3 = n3*4;
    
    avg1 = (n1 + n2 + n3 + n4)/10.0;

    cout << "Media: " << fixed << setprecision(1)<<avg1 << endl;;

    if (avg1 >= 7.0)
    {
        cout << "Aluno aprovado." <<endl;
    }
    else if( avg1 < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if(avg1 >= 5.0 && avg1 <= 6.9)
    {
        cout << "Aluno em exame." <<endl;
        cout << "Nota do exame: " ;
        cin >> n5; cout << n5 << endl;
        avg2 = (avg1 + n5)/2.0;

        if(avg2 >= 5)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1)<< avg2 << endl;
    }

    return 0;
}