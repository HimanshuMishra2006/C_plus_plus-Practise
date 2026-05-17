#include <bits/stdc++.h>
using namespace std;

//Diamond Pattern  using stars(asterisk);
void printDiamond(int n) {
     
    //Drawing first part
    for(int i=1;i<=(n);i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //Drawing second part
    for(int i=1;i<=(n);i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        
        for(int k=0;k<=n-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter side:";
    cin >> n;
    
    printDiamond(n);
   
    //cout<<endl;
    
    return 0;
}