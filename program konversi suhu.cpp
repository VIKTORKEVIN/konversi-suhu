#include<iostream>
using namespace std;

int main()
{
    float C,F,K,R;
    cout<<"program konversi suhu"<<endl;
    cout<<"masukkan nilai celcius=";
    cin>>C;
    F=C*1.8 - 32;
    K=C*273.15;
    R=C*0.8;
    cout<<"nilai fahrenheit="<<F<<endl;
    cout<<"nilai kelvin="<<K<<endl;
    cout<<"nilai Reamur="<<R<<endl;
    return 0;
}
