#include<iostream>
using namespace std;

/*Given an integer n, calculate the sum of series
1^3 + 2^3 + 3^3 + 4^3 + … till n-th term.*/

int sumOfSeries(int n)
{
    // code here
    int sum=((n*(n+1))/2);
    return sum*sum;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    cout<<"Sum Series for the "<<num<<"th term is : "<<sumOfSeries(num);
}    

