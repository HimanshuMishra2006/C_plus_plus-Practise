#include<iostream>
using namespace std;
#include<map>

char getMaxOccuringChar(string& s) {
        //  code here
        map<char,int> mpp;
        
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        
        int maxm=0;
        char str=s[0];
        for(auto it=mpp.begin();it !=mpp.end();it++)
        {
            if(it->second>maxm)
            {
              maxm=it->second;
              str=it->first;
            }
            
        }
        
        return  str;
}

int main() {
    string s ;
    cout<<"Enter a string:";
    cin>>s;
    cout << "Most frequent char: " << getMaxOccuringChar(s) << endl; // Output: 'a'
    return 0;
}
