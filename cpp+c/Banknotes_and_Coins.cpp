//even tho the same logic pases in c, cpp te kn jani pass kore na. so either use the c version as cpp one, or use alt solutions. ex: https://www.codeshikhi.com/2020/11/uri-online-judge-1021-banknotes-and-coins-solution-in-c-cpp-cpluscplus-python.html

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >>n;
    cout << "NOTAS:" << endl;

    //100 note
    int note_100 = n/100;
    cout<< note_100 <<" nota(s) de R$ 100.00"<<endl;

    //50 note
    int note_50 = (n - (note_100 * 100)) / 50;
    cout<< note_50 <<" nota(s) de R$ 50.00"<<endl;

    //20 note
    int note_20 =  (n - (note_100 * 100) - (note_50 * 50)) / 20 ;
    cout<< note_20 <<" nota(s) de R$ 20.00"<<endl;

    //10 note
    int note_10 =  (n - (note_100 * 100) - (note_50 * 50) - (note_20*20)) / 10 ;
    cout<< note_10 <<" nota(s) de R$ 10.00"<<endl;

    //5 note
    int note_5 =  (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)) / 5 ;
    cout<< note_5 <<" nota(s) de R$ 5.00"<<endl;

    //2 Note
    int note_2 =  (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5)) / 2 ;
    cout<< note_2 <<" nota(s) de R$ 2.00"<<endl;

    //coins
    cout<<"MOEDAS:" <<endl;
    //1 coin
    double coin_1 =  (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5) - (note_2*2))  ;
    cout<< coin_1 <<" moeda(s) de R$ 1.00"<<endl;   

    //50 cent
    double coin_50 =   (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5) - (note_2*2) - (coin_1))/0.50;
    cout << coin_50 << " moeda(s) de R$ 0.50" << endl;

    //25 cent
    double coin_25 =   (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5) - (note_2*2) - (coin_1) -(coin_50*0.50))/0.25;
    cout << coin_25 << " moeda(s) de R$ 0.25" << endl;

    //10 cent
    double coin_10 =   (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5) - (note_2*2) - (coin_1) -(coin_50*0.50)- (coin_25*0.25))/0.10;
    cout << coin_10 << " moeda(s) de R$ 0.10" << endl;

    //5 cent
    double coin_5 =   (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5) - (note_2*2) - (coin_1) -(coin_50*0.50)- (coin_25*0.25)- (coin_10*0.10))/0.05;
    cout << coin_5 << " moeda(s) de R$ 0.05" << endl;

    //1 cent
    double coin_01 =   (n - (note_100 * 100) - (note_50 * 50)- (note_20*20) - (note_10*10)- (note_5*5) - (note_2*2) - (coin_1) -(coin_50*0.50)- (coin_25*0.25)- (coin_10*0.10)- (coin_5*0.05))/0.01;
    cout << coin_01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}