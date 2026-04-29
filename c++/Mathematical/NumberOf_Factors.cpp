#include<iostream>
using namespace std;
#include<math.h>
//Find the number of factors for a given integer n.


int countFactors(int n) {
        // code here
        int count=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(i*i==n)
            {
                count++;
            }
            else
            {
            if(n%i==0) count+=2;
            }
        }
        return count;
}

int main()
{
        int x;
       cout<<"Enter a number:";
       cin>>x;

       cout<<"No of Factors of "<<x<< " is :"<<countFactors(x);
}

