#include<iostream>
using namespace std;

//print names n times
void printNos(string name,int n)
{
        
    // Base Condition
    if(n==0) return;        
        
    cout<<name<<" ";
        
    //recursive call
    printNos(name,n-1);

}


int main()
{
    int n;
    string name;

    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Enter a name : ";
    cin>>name;

    printNos(name,n);
}
