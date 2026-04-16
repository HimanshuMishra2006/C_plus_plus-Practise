#include<iostream>
using namespace std;

int factorial(int n) {
        // code here
        int fact=1;
        if(n==0 || n==1)return 1;
        for(int i=n;i>=1;i--)
        {
            fact*=i;
        }
        return fact;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num>0)
    {
        cout<<"Factorial of "<<num<<" ="<<factorial(num);
    }
    else{
        cout<<"Invalid integer!\nEnter a positive number.";
    }
}