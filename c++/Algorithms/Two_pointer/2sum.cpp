#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

// sum of 2 elements = target;

vector<int> twoSum(vector<int> &arr, int target) {
    sort(arr.begin(),arr.end());
    int sum=0;
    int l=0,r=arr.size()-1;
    
    while(l<r)
    {
        if(arr[l]+arr[r]==target)
        {
            return {arr[l],arr[r]};
        }
        else if(arr[l]+arr[r]>target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }  
    return {};
}

int main()
{
    vector<int>arr;

    int target;
    cout<<"Enter target : ";
    cin>>target;

    int x;
    cout<<"Enter values of the array(stop using ctrl+z):";
    while(cin>>x)
    {
        arr.push_back(x);
    }

    vector<int>result=twoSum(arr,target);
     
    cout<<"Required pairs : ";

    for(int it:result)
    {
        cout<<it<<" ";
    }
}