#include <bits/stdc++.h>
using namespace std;

void printTriangle(int n)
{
    // code here
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
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