#include <bits/stdc++.h>
using namespace std;
#include<vector>

vector<string> extractInt(string &s) {
        
        vector<string> numStr;
        string str="";
        
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                str="";
                while(isdigit(s[i]))
                {
                    str+=s[i];
                    i++;
                }
                
                numStr.push_back(str);
            }
        }
        
        return numStr;
}

int main()
{
    string s;
    
    cout<<"Enter a string : ";
    cin>>s;
    
    vector<string> numStr=extractInt(s);

    cout<<"Extracted numbers from the string : ";
    for(string str : numStr)
    {
        cout<<str<<" ";
    }

}