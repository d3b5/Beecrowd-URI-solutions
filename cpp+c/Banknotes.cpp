#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    cout << n << endl;
    //100 note
    int note_100 = n/100;
    cout<< note_100 <<" nota(s) de R$ 100,00"<<endl;

    //50 note
    int note_50 = (n - (note_100 * 100)) / 50;
    cout<< note_50 <<" nota(s) de R$ 50,00"<<endl;

    //20 note
    int note_20 =  (n - (note_100 * 100) - (note_50 * 50)) / 20 ;
    cout<< note_20 <<" nota(s) de R$ 20,00"<<endl;

    //10 note
    int note_10 =  (n - (note_100 * 100) - (note_50 * 50) - (note_20*20)) / 10 ;
    cout<< note_10 <<" nota(s) de R$ 10,00"<<endl;

    //5 note
    int note_5 =  (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)) / 5 ;
    cout<< note_5 <<" nota(s) de R$ 5,00"<<endl;

    //2 Note
    int note_2 =  (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5)) / 2 ;
    cout<< note_2 <<" nota(s) de R$ 2,00"<<endl;

    //1 Note
    int note_1 =  (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5) - (note_2*2))  ;
    cout<< note_1 <<" nota(s) de R$ 1,00"<<endl;   
    
    return 0;
}