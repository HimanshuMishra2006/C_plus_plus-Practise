#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

vector<int> findTwoElement(vector<int>& arr)
{
    long long n=arr.size();
    unordered_map<int,int>mpp;
    vector<int> result;
    
    long long sum=n*(n+1)/2;
    
    for(int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }
    
    long long sumARR=0;
    
    for(auto it:mpp)
    {
        sumARR+=it.first;
        if(it.second==2)
        {
            result.push_back(it.first);
        }
    }
    
    if(sum==sumARR)
    {
        return {-1,-1};
    }
    result.push_back(abs(sum-sumARR));
    return result;
}

int main()
{
    vector<int> arr;
    int x;

    //input
    cout<<"Enter no from 1 to n(press ctrl+z and enter to terminate inputs):"<<endl;

    while(cin>>x)
    {
        arr.push_back(x);
        
    }
    cout<<"Duplicate and missing number:";
    vector<int>result=findTwoElement(arr);
    for(int num:result)
    {
        cout<<num<<" ";
    }
}