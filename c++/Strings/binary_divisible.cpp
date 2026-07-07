#include<iostream>
using namespace std;
#include<math.h>

bool isDivisible(string& s) {
        
    int count=0;
    int p=0;
    
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='1') p+=(pow(2,count));
        count++;
    }
    
    if(p%10!=0)return false;
        
    return true;
}

int main()
{
    string s;
    cout<<"Enter a string with only 0's and 1's:";
    cin>>s;

    if(isDivisible)
    {
        cout<<" Yes,it's divisible by 10";
    }
    else{
        cout<<"No, it's not divisible by 10";
    }
}