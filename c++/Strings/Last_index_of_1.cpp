#include<iostream>
using namespace std;

int lastIndex(string s) {
        for(int i=s.length();i>-1;i--)
        {
            if(s[i]=='1') return i;
            
        }
        
        return -1;
}

int main()
{
    string s;
    cout<<"Enter a string with only 0's and 1's:";
    cin>>s;

    cout<<"Last Index of 1 is "<<lastIndex(s);
}