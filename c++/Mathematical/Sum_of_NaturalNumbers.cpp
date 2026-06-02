#include<iostream>
using namespace std;

/*Given an integer n, calculate the sum of series
1 + 2 + 3 + 4 + … till n-th term.*/

int sumOfSeries(int n)
{
    //mathematical formula for sum of natural numbers series
    int sum=(n*(n+1))/2;
    return sum;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    cout<<"Sum Series for the "<<num<<"th term is : "<<sumOfSeries(num);
}    