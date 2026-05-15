#include <bits/stdc++.h>
using namespace std;

//Triangle Pattern 8;

void printTriangle(int n)
{
    int num=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        
        for(int k=1;k<=2*num-1;k++)
        {
            cout<<"*";
        }
        num--;
        
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter side:";
    cin >> n;
    
    printTriangle(n);
   
    //cout<<endl;
    
    return 0;
}