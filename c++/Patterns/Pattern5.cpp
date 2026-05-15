#include <bits/stdc++.h>
using namespace std;

//Triangle Pattern 5;

void printTriangle(int n){
    // code here
    for(int i=n;i>0;i--)
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
    cout<<"Enter side:";
    cin >> n;
    
    printTriangle(n);
   
    //cout<<endl;
    
    return 0;
}
