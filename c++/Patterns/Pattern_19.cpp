#include <bits/stdc++.h>
using namespace std;

// n=5

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/


//function for the given pattern;

void printTriangle(int n) {


    //first half
    for(int i=0;i<n;i++)
    {                 

        // left inverted triangle
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        

        //the space btw both  inverted triangles
        for(int j=1;j<=2*i;j++)
        {
            cout<<" ";
        }

        //right inverted triangle
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
     
        cout<<endl;
    }

    //second half
    for(int i=1;i<=n;i++)
    {

       // left  triangle
        for(int j=1;j<=i;j++)
        {
           cout<<"*";
        }

        //required spacing btw two upright triangles
        for(int j=1;j<=2*n-(2*i);j++)
        {
            cout<<" ";
        }

        //right triangle
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        
    cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter side:";
    cin >> n;
    
    printTriangle(n);
       
    return 0;
}
