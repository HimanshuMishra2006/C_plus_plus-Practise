#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

/*
Given an array of integers arr[]  and a number k.
Return the maximum sum of a subarray of size k.
*/

int maxSubarraySum(vector<int>& arr, int k)
{
    // code here
    int l=0,r=l+k-1;
    int sum=0,maxSum=0;
    
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    
    
    while(r<arr.size())
    {
        maxSum=max(sum,maxSum);
        sum-=arr[l];
        l++;r++;
        sum+=arr[r];
    }
    
    return maxSum;
} 

int main()
{
    vector<int>arr;
    int x,k;
    cout<<"Enter K:";
    cin>>k;
    cout<<"Enter values of the array(stop using ctrl+z):"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }
    cout<<"Maximum sum of a subarray of size "<<k<<"is : "<<maxSubarraySum(arr,k);
    return 0;
}