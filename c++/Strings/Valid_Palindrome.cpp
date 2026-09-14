#include<iostream>
using namespace std;

bool isAlnum(char ch) {
        // Check digits
        if (ch >= '0' && ch <= '9') return true;
        // Check uppercase letters
        if (ch >= 'A' && ch <= 'Z') return true;
        // Check lowercase letters
        if (ch >= 'a' && ch <= 'z') return true;

        return false;
    }

    bool isPalindrome(string s) {
        
        int l=0,r=s.length()-1;
        if(s.length()==0) return true;

        while(l<r){

            while(l<r && !isAlnum(s[l])) l++;
            while(l<r && !isAlnum(s[r])) r--;

            if (tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;    
        }
        return true;
    }

    int main()
    {
        string s="A man, a plan, a canal: Panama";
        cout<<isPalindrome(s);
    }