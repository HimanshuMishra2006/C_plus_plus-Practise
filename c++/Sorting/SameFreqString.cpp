#include<iostream>
using namespace std;
#include<algorithm>

bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size())
        {
            return false;
        }
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        return s1==s2;// 1.If two strings have same length
                      // 2. If content of both strings are same,thus o need of loop;   
    }

    int main()
    {
        string a= "hello";
        string b="lehlo";
        if(areAnagrams(a,b)){
            cout<<"are Anagrams";
        }else{
            cout<<"Neot Anagrams";
        }
    }