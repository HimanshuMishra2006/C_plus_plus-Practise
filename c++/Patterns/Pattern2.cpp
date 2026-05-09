#include <bits/stdc++.h>
using namespace std;

void triangleWall(int s){
    
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<=i;j++)
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
    
    triangleWall(n);
   
    //cout<<endl;
    
    return 0;
}