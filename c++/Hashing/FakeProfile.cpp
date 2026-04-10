#include<iostream>
using namespace std;
#include<unordered_map>
/*There is a hacker named "Vijay" who has developed a method to check whether an id at some social networking site is fake or real using its username.
His method includes: if the number of distinct consonent characters in one's user name is odd, then the user is a male, otherwise a female. You are given the string that denotes the user name, please help Vijay to determine the gender of this user by his method. Ignore the vowels.
Note: The input only contains lowercase English alphabets.*/

string solve(string a) {
    // code here
    unordered_map<char,int>mpp;
    int count=0;
    for(int i=0;i<a.length();i++)
    {
        mpp[a[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.first!='a'&& it.first!='e'&& it.first!='i'&& it.first!='o'&& it.first!='u')
        {
            count++;
        }
    }
    
    if(count%2==0)return "SHE!";
    
    return "HE!";
}

int main() {
    string s ;
    cout<<"Enter a string:";
    cin>>s;
    cout << "The User is a : " << solve(s) << endl; // Output: 'a'
    return 0;
}