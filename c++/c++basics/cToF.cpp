#include<iostream>
using namespace std;

 double cToF(int C) {
        
        return (9.0*C)/5.0 + 32.0;
        
}

int main()
{
    int C;
    cout<<"ENter a value in Celcius : ";
    cin>>C;

    cout<<"In Fahrenheit "<<C<<" degree : "<<cToF(C);
}