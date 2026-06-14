#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

//Find the sum of distinct elements in an array. if arr={1,2,2,3,6,3} , required sum = 1+2+3+6=12 ;

int findSum(vector<int>& arr) {
        
        unordered_map<int,int>mpp;
        
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        
        int sum=0;
        
        for(auto it:mpp)
        {
            sum+=it.first;
        }
        
        return sum;
}

int main()
{
    vector<int> arr;
    int x;

    cout<<"Enter array elements(ctrl+z to stop) : "<<endl;
    
    //input arr
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"Original Array : ";
    for(int i:arr)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The required sum is : "<<findSum(arr);

    return 0;
}
