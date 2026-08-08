#include<iostream>
using namespace std;
#include<math.h>

 int countSquares(int n) {
        // code here
        int count = 1;
        double sqroot=sqrt(n);
        
        if(floor(sqroot)==sqroot) count=0;
        
        
        for(int i=2;i<=sqroot;i++)
        {
            count++;
        }
        
        return count;
}

 int main()
    {
        int num;
        cout<<"Enter a number:";
        cin>>num;

        cout<<"Total digits which divide "<<num<<" Evennly : ";
        cout<<countSquares(num);
    }


