#include<iostream>
using namespace std;

string toLower(string &s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }

    return s;
}

int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;

    cout<<"String in LowerCase : "<<toLower(s);
}