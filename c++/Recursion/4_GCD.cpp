#include<iostream>
using namespace std;


int gcd(int a, int b)
{        
        
    if(a%b==0) return b;
        
    return gcd(b,a%b);
        
}

int main()
{
    int n,p;

    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Enter another number : ";
    cin>>p;

    cout<<"GCD of "<<n<<" and "<<p<<" is : "<<gcd(n,p);

    return 0;
}