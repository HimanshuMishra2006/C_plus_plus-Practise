#include<iostream>
using namespace std;
#include<math.h>
#include<vector>

//GCD (HCF or Greatest Common Divisor) and LCM(Least common multiple);

vector<int>gcdAndlcm(int a, int b)
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

    int lcm=(a*b)/gcd;

    return {lcm,gcd} ;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    vector<int>result=gcdAndlcm(a,b);

    cout<<"LCM and HCF of both numbers is:"<<endl;

    for(int x:result)
    {
        cout<<x<<" ";
    }
}