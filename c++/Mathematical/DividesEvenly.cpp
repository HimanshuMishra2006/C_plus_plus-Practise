#include<iostream>
using namespace std;

// Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int count=0,digit,num=n;
        while(n!=0)
        {
            digit=n%10;
            if(digit!=0 && num%digit==0)count++;
            n/=10;
        }
        return count;
    }

    int main()
    {
        int num;
        cout<<"Enter a number:";
        cin>>num;

        cout<<"Total digits which divide "<<num<<" Evennly : ";
        cout<< evenlyDivides(num);
    }