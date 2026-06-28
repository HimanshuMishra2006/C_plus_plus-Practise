#include<iostream>
using namespace std;

void printNos(int n)
{
        
    // Base Condition
    if(n==0) return;        
        
    cout<<n<<" ";
        
    //recursive call
    printNos(n-1);

}

int main()
{
    int n;

    cout<<"Enter a number : ";
    cin>>n;

    printNos(n);
}