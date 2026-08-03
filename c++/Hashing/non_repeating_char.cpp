#include<iostream>
using namespace std;
#include<unordered_map>

char nonRepeatingChar(string &s)
    {
        unordered_map<char,int> mpp;
        
        for(int x:s)
        {
            mpp[x]+=1;
        }
        
        for(int it:s)
        {
            if(mpp[it]==1)return it;
        }
        
      return '$';
}

int main()
{
    string s;
    cout<<"Eter a string : ";
    cin>>s;

    cout<<"THe first non-repeating character is "<<nonRepeatingChar(s);
}