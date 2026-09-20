#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

int countOnes(vector<int>& arr) {
       
    int l=0,r=arr.size()-1;
        
    if(arr[r]==1) return r+1;
    if(arr[l]==0) return 0;
    
    while(l<r)
    {
        int mid=l+(r-l)/2;
        
        if(arr[mid]==1 && arr[mid+1]==0)
        {
            return mid+1;
        }
        else if(arr[mid]==0)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
}

int main()
{
    //input
    vector<int>arr;
    int x;

    cout<<"Enter array elements in 1's & 0's (ctrl+z to stop): "<<endl;
    
    while(cin>>x)
    {
      arr.push_back(x);  
    }

    cout<<"Number of 1's in array :  "<<countOnes(arr);

}