#include<iostream>
using namespace std;

bool isDivBy8(string &s) {
        
        if(s.length()<3)
        {
            int n=stoi(s);
            return n%8==0;
        }
        
        string numStr="";
        
        for(int i=s.length()-3; i<s.length() ;i++)
        {
            numStr+=s[i];
        }
        
        int num = stoi(numStr);
        
        if(num%8==0)
        {
            return true;
        }
        
        return false;
}

int main()
    {
        string s ;
        cout<<"Enter a number in string :";
        cin>>s;

        if(isDivBy8(s))
        {
            cout<<"divisible";
        }
        else{
            cout<<"Not divisible";
        }
        
    }