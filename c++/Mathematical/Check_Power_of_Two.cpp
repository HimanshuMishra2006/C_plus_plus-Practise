#include<iostream>
using namespace std;

int isPowerofTwo(int n)
{
    int x=0;
    if(n<=0) return 0;
        
    while(n%2==0)
    {
        n/=2;
        x++;
    }
        
    return x;
}

int main()
{
    int n,x;
    cout<<"Enter a number : ";
    cin>>n;

    x=isPowerofTwo(n);
    if(x!=0)
    {
        cout<<n<<" is a Power of two."<<endl;
        cout<<2<<"^"<<x<<" = "<<n;
    }
    else{
        cout<<n<<" is not a power of two.";
    }
}