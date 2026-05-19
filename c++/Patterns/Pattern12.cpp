#include <bits/stdc++.h>
using namespace std;
/*
input: n = 4
Output:
1
2 3
4 5 6
7 8 9 10      */

int main() {
    int n,t=0,i=1,j=1;   // 't' is a temp var
    
    cout<<"Enter n:";
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
        for(j=j;j<=t+i;j++)
        {
            cout<<j<<" ";
        }
        t=j-1;    
        cout<<endl;
    }

    return 0;
}
