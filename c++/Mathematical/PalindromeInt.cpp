#include<iostream>
using namespace std;

bool isPalindrome(int n) {
        // code here.
        int num=n,digit,rev_no=0;
        while(n!=0)
        {
            digit=n%10;
            rev_no=rev_no*10+digit;
            n/=10;
        }
        return num==rev_no;
}

int main()
{
    int num;
    cout<<"Enter an integer:";
    cin>>num;

    if(isPalindrome(num))
    {
        cout<<"Is Palindrome!";
    }
    else{
        cout<<"Not a PAlindrome";
    }
}