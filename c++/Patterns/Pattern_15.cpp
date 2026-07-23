#include <bits/stdc++.h>
using namespace std;


int NthTerm(int n)
    {
        //Using Recursion -> TC: O(n), SC : O(n);
        /*
        const int MOD=1e9+7;
        if(n==1) return 2;
        return ((n)*(NthTerm(n-1))%MOD+1)%MOD;*/
        
        //Using loop ->  TC: O(n), SC : O(1)
        const int MOD=1e9+7;
        long long t=2;
        
        for(int i=2;i<=n;i++)
        {
            t=(t*i+1)%MOD;
        }
        return t;
        
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"The "<<n<<"th "<<"term of the following pattern is : "<<NthTerm(n);
}
