#include<iostream>
using namespace std;

bool isDigitSumPalindrome(int n) {
        
    int sumN=0;
    int revSum=0;
    
    while(n!=0)
    {
        int digit=n%10;
        sumN+=digit;
        n/=10;
    }
    
    int temp=sumN;
    
    while(temp!=0)
    {
        int digit=temp%10;
        revSum=revSum*10+digit;
        temp/=10;
    }
    
    if(sumN==revSum) return true;
    
    return false;
        
}

int main()
{
    int n;
 
    cout<<"Enter an number : ";
    cin>>n;

    if(isDigitSumPalindrome(n))
    {
        cout<<"yes, the sum of digits of "<<n<<" is a palindrome.";
    }
    else
    {
        cout<<"No, the sum of digits of "<<n<<" is not a palindrome.";
    }
    return 0;

}