#include<iostream>
using namespace std;
#include<math.h>

int kthDigit(int a, int b, int k) {
        long long n=pow(a,b);
        int count=0;
        
        while(count!=k)
        {
            int digit=n%10;
            count++;
            n/=10;
            
            if(count==k)return digit;
        }
}

int main(){
    int a,b,k;
    cout<<"Enter a number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    cout<<"Enter k = ";
    cin>>k;
    cout<<"The "<<k<<"th value of "<<a<<"^"<<b<<" is "<<kthDigit(a,b,k);
}

