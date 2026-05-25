#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    //swapping;
    a=a+b;
    b=a-b;
    a=a-b;
}

int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a;
    cin>>b;

    cout<<"Before Swapping, a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping, a="<<a<<" and b="<<b;
}