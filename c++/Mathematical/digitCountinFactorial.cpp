#include<iostream>
using namespace std;
#include<math.h>

int digitsInFactorial(int n)
{
        
    if (n == 0 || n == 1) {
        return 1;
    }
    
    double sum = 0.0;
    for (int i = 2; i <= n; i++) {
        sum += log10(i);  // accumulate log10 instead of multiplying
    }
    return (int)sum + 1;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    cout<<"Number of digits in "<<num<<"! : "<<digitsInFactorial(num);
}