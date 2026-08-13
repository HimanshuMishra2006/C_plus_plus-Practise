#include<iostream>
using namespace std;

 bool isPal(string &s,int l,int r)
    {
        if(l>=r) return true;
        if(s[l]!=s[r]) return false;
        
        return isPal(s,l+1,r-1);
        
    }
    
    bool isPalindrome(string& s) {
        
         return isPal(s,0,s.length()-1);
}

int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;

    cout<<"the string is palindrome : "
        << (isPalindrome(s) ? "true" : "false") 
        <<endl; 
}