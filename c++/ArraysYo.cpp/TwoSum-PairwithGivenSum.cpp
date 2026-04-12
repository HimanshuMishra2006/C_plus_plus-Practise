#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool twoSum(vector<int>& arr, int target) {
        // code here
        int size=arr.size();
        sort(arr.begin(),arr.end());
        int l=0,r=size-1;
        
        while(l<r)
        {
            if(arr[l]+arr[r]==target) return true;
            
            if(arr[l]+arr[r]<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        
        return false;
}

int main()
{
    vector<int> arr;
    int x;
    cout<<"Enter array elements:"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }
    cin.clear();
    int target;
    cout<<"Enter the Sum:";
    cin>>target;
    if(twoSum(arr,target))
    {
        cout<<"Yes,There exist indices with given sum";
    }
    else{
        cout<<"No indices with given sum matcches";
    }
}