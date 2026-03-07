#include<iostream>
using namespace std;

bool isPrime(int n) {
        // code here
        if(n==1) return false;
        if(n==2) return true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
int main()
{
    int n;
    cout<<"enter an integer: ";
    cin>>n;

    if(isPrime(n))
    {
        cout<<"prime no.";
    }else{
        cout<<"Not a prime no.";
    }
}    