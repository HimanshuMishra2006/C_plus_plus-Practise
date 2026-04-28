#include<iostream>
using namespace std;
#include<algorithm>

//Given 3 numbers a, b and c. Find the greatest number among them.

int greatestOfThree(int a, int b, int c) {
        // code here
        return max({a,b,c});
}

int main()
{
    int a,b,c;
    cout<<"Enter Three numbers:"<<endl;
    cin>>a>>b>>c;

    cout<<"Largest of three is "<<greatestOfThree(a,b,c)<<endl;
}