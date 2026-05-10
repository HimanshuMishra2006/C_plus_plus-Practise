#include <bits/stdc++.h>
using namespace std;

//Triangle Pattern;

void printTriangle(int n){
    // code here
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        
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