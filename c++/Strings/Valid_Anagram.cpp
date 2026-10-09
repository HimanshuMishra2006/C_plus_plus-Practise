#include<iostream>
using namespace std;
#include<unordered_map>

bool areAnagrams(string& s1, string& s2)
{
    
    if(s1.length()!=s2.length()) return false;
    
    unordered_map<char,int> mpp;
    
    for(char ch : s1)
    {
        mpp[ch]++;
    }
    
    for(char ch : s2)
    {
        mpp[ch]--;
        if(mpp[ch]==0){
            mpp.erase(ch);
        }
    }
    
    return mpp.size()==0;
}


int main()
{
    string s1;
    cout<<"Enter string 1 :";  
    getline(cin,s1);
    
    string s2;
    cout<<"Enter string 2 :";
    getline(cin,s2);

    if(areAnagrams(s1,s2)){
        cout<<"Valid Anagram";
    }
    else{
        cout<<"not anagrams";
    }
}