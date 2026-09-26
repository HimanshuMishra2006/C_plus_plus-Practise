#include<iostream>
using namespace std;
#include<vector>

int countZeroes(vector<int>& arr)
{
        
    if(arr[0]==0) return arr.size();
    if(arr[arr.size()-1]==1) return 0;
    
    int l=0,r=arr.size()-1;
    int index=0;
    
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        
        if(arr[mid]==0)
        {
            index=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    
    return arr.size()-index;
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

    cout<<"Number of 0's in array :  "<<countZeroes(arr);

}