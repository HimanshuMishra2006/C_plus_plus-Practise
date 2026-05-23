#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

/*
He defines a new series called Geeky numbers.
Here the next number is the sum of the K preceding numbers.
You are given an array of size K, GeekNum[ ], where the ith element 
of the array represents the ith Geeky number. Return its Nth term.
*/

long long solve(int N, int K, vector<long long> GeekNum) {
    
    int size=GeekNum.size();
    long long sum=0,result=0;
    
    if(K==1)
    {
        return GeekNum[0];
    }
    
    if (N <=size) return GeekNum[N-1];
    
    for(int i=size-K;i<size;i++)
    {
        sum+=GeekNum[i];
    }
    GeekNum.push_back(sum);
    int l=size-K,r=l+K-1;
    while(r<N+1)
    {
        sum-=GeekNum[l];
        l++;r++;
        sum+=GeekNum[r];
        GeekNum.push_back(sum);
        
    }
    
    return GeekNum[N-1];
        
}

int main()
{
    vector<long long>arr;
    int x,k,N;
    cout<<"Enter N:";
    cin>>N;
    cout<<"Enter K:";
    cin>>k;
    cout<<"Enter values of the array(stop using ctrl+z):"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }
    cout<<N<<"th value of the series is : "<<solve(N,k,arr);
    return 0;
}