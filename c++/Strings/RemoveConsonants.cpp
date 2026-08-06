#include<iostream>
using namespace std;

 string remConsonants(string &s)
 {
        
        string res="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
               res+=s[i];
               
               }
        }
        
        return res;
}

int main() {
    string s ;
    cout<<"Enter a string : ";
    cin>>s;
    cout <<"resultant string : "<< remConsonants(s) << endl; // Output: "eoo"
    return 0;
}