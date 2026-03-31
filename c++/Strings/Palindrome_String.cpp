#include<iostream>
using namespace std;
#include<algorithm>

bool isPalindrome(string& s)
{
    // code here
    string reversed_string=s;

    reverse(reversed_string.begin(),reversed_string.end());

    return s==reversed_string;

}

int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    if(isPalindrome(s))
    {
       cout<<"Valid Palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }
    return 0;

}