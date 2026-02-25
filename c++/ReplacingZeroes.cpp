#include<iostream>
using namespace std;

int convertFive(int n) {
        // Your code here
        string s=to_string(n);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'){
                s[i]='5';
            }
        }
        return stoi(s);
    }

    int main()
    {
        int num;
        cout<<"Enter a number with Zeroes:";
        cin>>num;

        cout<<"After converting Zeroes into 5,";
        cout<<"Given number beacomes "<<convertFive(num);
        return 0;        
    }