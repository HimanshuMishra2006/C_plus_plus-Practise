#include<iostream>
using namespace std;
#include<algorithm>

int replaceBit(int n, int k)
    {
    int N=n;
    
    string rem="";
    while(n>0)
    {
        rem+=to_string(n%2);
        n/=2;
    }
    
    reverse(rem.begin(),rem.end());

    if(rem[k-1]=='1')
    {
        rem[k-1]='0';
    }
    else
    {
        return N;
    }
    int p=1,num=0;
    for(int i=rem.length()-1;i>=0;i--)
    {
        if(rem[i]=='1')
        {
            num+=p;
        }
        
        p*=2;
    }
    
    return num;         
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int k;
    cout<<"Enter k : ";
    cin>>k;

    cout<<"After replacing the bit, n becomes : "<<replaceBit(n,k);

    return 0;
}
