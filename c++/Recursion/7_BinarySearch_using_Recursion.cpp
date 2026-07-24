#include<iostream>
using namespace std;
#include<vector>

bool Binary_Search(int l,int r,vector<int>arr,int k)
{
        
    if(l>r) return false;
    int mid=l+(r-l)/2;
    
    if(arr[mid]==k) return true;
     if(arr[mid]>k)
    {
        return Binary_Search(l,mid-1,arr,k);
    }
    else 
    {
        return Binary_Search(mid+1,r,arr,k);
    }
        
}
    
    
bool binarySearch(vector<int>& arr, int k) {
        
    int l=0;
    int r=arr.size()-1;
    
    return Binary_Search(l,r,arr,k);
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int target = 4;

    vector<int> nums={1,2,3,5,6,7,8};
    

    if(binarySearch(arr,target))
    {
        cout<<target<<" is prsent in arr.";
    }
    else
    {
        cout<<target<<" is not present in arr.";
    }

    cout<<endl;

    if(binarySearch(nums,target))
    {
        cout<<target<<" is prsent in nums.";
    }
    else
    {
        cout<<target<<" is not present in nums.";
    }
}