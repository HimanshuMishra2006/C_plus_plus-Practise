#include<iostream>
using namespace std;
#include<unordered_map>

string removeDups(string &s) {
        // Your code goes here
        unordered_map<char,int> mpp;
        string result="";
       for(int i=0;i<s.length();i++)
       {
           mpp[s[i]]++;
           if(mpp[s[i]]==1)
           {
               result+=s[i];
           }
       }
       return result;
}

int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);

    cout<<"After Removing duplicates : "<<removeDups(s);

}