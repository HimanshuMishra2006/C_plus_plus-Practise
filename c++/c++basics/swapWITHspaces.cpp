#include<iostream>
using namespace std;

 string reverses(string &s) {
        
        int l=0,r=s.length()-1;
        while(l<r)
        {
            if (s[l] == ' ') {
               l++;
               continue;
            }
           // Skip spaces from right
           if (s[r] == ' ') {
               r--;
               continue;
           }
           // Swap non-space characters
           swap(s[l], s[r]);
           l++;
           r--;
       } 
        
        return s;
}

int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);

    cout<<"Before Swapping, s="<<s<<endl;
    reverses(s);
    cout<<"After swapping, s="<<s;
}