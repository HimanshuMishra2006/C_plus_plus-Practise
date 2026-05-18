#include<iostream>
using namespace std;

//Pattern 11;

/*1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1*/

void printTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
    
        for(int j=1;j<=4*(n-i);j++)
        {
            cout<<" ";
        }
        
        for(int k=i;k>0;k--)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    }

int main() {
    int n;
    cout<<"Enter rows:";
    cin >> n;
    
    printTriangle(n);
   
    //cout<<endl;
    
    return 0;
}