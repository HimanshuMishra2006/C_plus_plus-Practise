#include<iostream>
using namespace std;

int findSum(string& s)
{
        
    int sum=0;
    string numStr="";
    
    for(int i=0;i<s.length();i++)
    {
        if(isdigit(s[i]))
        {
            numStr+=s[i];
            
            if(i==s.length()-1)
            {
                sum+=stoi(numStr);
            }
        }
        else
        {
            if(!numStr.empty())
            {
                sum+=stoi(numStr);
                numStr="";
            }
        }
    }
    
    return sum;
}

int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;

    cout<<"Sum of numbers inside the string is : "<<findSum(s);
    return 0;
}