#include<iostream>
using namespace std;
#include<math.h>

 int cubeRoot(int n) {
        // code here
        return cbrt(n);
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"Cube root of "<<num<<" is : "<<cubeRoot(num);
}