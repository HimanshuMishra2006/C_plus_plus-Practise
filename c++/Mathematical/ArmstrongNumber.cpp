#include<iostream>
using namespace std;
#include<math.h>

bool armstrongNumber(int n)
    {
        int sum=0;
        int temp=n;
        
        while(temp!=0)
        {
            int d=temp%10;
            sum+=pow(d,3);
            temp/=10;
        }
        
        return sum==n;
}

int main()
{
        int num;
        cout<<"Enter a number:";
        cin>>num;



        if(armstrongNumber(num))
        {
            cout<<"yes it is an armstrong number.";
        }
        else
        {
            cout<<"No it is not an armstrong number.";
        }
}