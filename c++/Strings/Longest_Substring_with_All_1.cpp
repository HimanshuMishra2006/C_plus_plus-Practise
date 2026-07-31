#include<iostream>
using namespace std;

 int longestSubstring(string s) {
        
        string str="";
        int maxm=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                str+=s[i];
                maxm=max(int(str.length()),maxm);  //string.length() does not gives integer value;
            }
            else
            {
                str="";
            }
        }
        
        return maxm;
}

int main() {
    string s ;
    cout<<"Enter a string:";
    cin>>s;
    cout << "Length of longest substring with only 1's :  " << longestSubstring(s) << endl; // Output: 'a'
    return 0;
}