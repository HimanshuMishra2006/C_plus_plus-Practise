#include<iostream>
using namespace std;
#include<math.h>

bool isPerfect(int n) {
        // code here
        int sum=1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                sum+=i+(n/i);
            }
        }
        if(sum==n)
        {
            return true;
        }
        
        return false;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(isPerfect)
    {
     cout<<num<<" is a Perfect number.";
    }
     else{
        cout<<"Not a Perfect Number number.";
    }
}
