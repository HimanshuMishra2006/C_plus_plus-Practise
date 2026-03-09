#include<iostream>
using namespace std;

bool isEven(int n) {
        // code here
        if(n%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
 
int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;

    if(isEven(num))
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}    