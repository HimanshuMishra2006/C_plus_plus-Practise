#include <bits/stdc++.h>
using namespace std;

//Multiplication Table of a given number;

int main() {
    int n;
    cout<<"Enter a number:";
    cin >> n;

    // code here
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}