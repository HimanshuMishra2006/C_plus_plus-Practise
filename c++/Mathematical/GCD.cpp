#include<iostream>
using namespace std;
#include<math.h>

//GCD (HCF or Greatest Common Divisor);

int gcd(int a, int b)
{       
    int n=min(a,b);
    int m=max(a,b);
    int gcd=1;
    
    for(int i=sqrt(n);i>0;i--)
    {
        if(n%i==0)
        {
            if(m%(n/i)==0) 
            {
                gcd=max(gcd,n/i);
                
            }
            else if(m%i==0)
            {
            gcd=max(gcd,i);
            }
        }
    }
     return gcd;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    cout<<"HCF of both numbers is:"<<gcd(a,b);
}