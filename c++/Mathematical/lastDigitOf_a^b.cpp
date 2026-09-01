#include<iostream>
using namespace std;
#include<math.h>
#include<vector>

 int getLastDigit(string& a, string& b) {
       if (b == "0") return 1;

       int base = (a.back() - '0');  // last digit of a
       // reduce exponent modulo 4
       long long exp = 0;
       for (char c : b) {
           exp = (exp * 10 + (c - '0')) % 4;
       }
       if (exp == 0) exp = 4;

       int result = 1;
       for (int i = 0; i < exp; i++) {
           result = (result * base) % 10;
       }
       return result;
}

int main()
{
    string a,b;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<"Last digit of "<<a<<"^"<<b<<" is : "<<getLastDigit(a,b);

}