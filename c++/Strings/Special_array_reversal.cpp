#include<iostream>
using namespace std;

/*Given a string S, containing special characters and all the alphabets,
reverse the string without affecting the positions of the special characters.*/



bool isAlphabet(char c)
{
return ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') );
}
string reverse(string str)
{
    
    int  l=0,r=str.length()-1;
    while(l<r)
    {
        if(isAlphabet(str[l]) && isAlphabet(str[r]))
        {
            swap(str[l],str[r]);
            l++;r--;
        }
        else if(isAlphabet(str[l]) && !isAlphabet(str[r]))
        {
            r--;
        }
        else if(!isAlphabet(str[l]) && isAlphabet(str[r]))
        {
            l++;
        }
        else
        {
            l++;r--;
        }
    }

return str;
}

int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);

    cout<<"Befor Reversing : "<<s<<endl;
    cout<<"After Reversing : "<<reverse(s);
}