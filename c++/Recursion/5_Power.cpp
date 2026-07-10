#include<iostream>
using namespace std;

double myPow(double x, int n) {

        //base condition
        if(n==0) return 1.00;

       //if power is negative
        if(n<0) return 1.00/myPow(x,-n);

       // if power is positive
        return x*myPow(x,n-1);

}

int main()
{

    int x,n;

    cout<<"Enter a number:";
    cin>>x;

    cout<<"Enter the Power :";
    cin>>n;

    cout<<x<<"^"<<n<<"="<<myPow(x,n);
}
