#include<iostream>
using namespace std;

int reverseDigits(int n) {
    // Code here
    int rev_no=0;
    while(n!=0)
    {
        int digit=n%10;
        rev_no=rev_no*10+digit;
        n/=10;
    }
    return rev_no;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    cout<<"After reversing, "<<num<<" becomes "<<reverseDigits(num);
}
