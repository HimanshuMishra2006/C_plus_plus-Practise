#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


int firstIndex(vector<int> &arr)
{
    if(arr[0]==1) return 0;
    
    if(arr[arr.size()-1] == 0) return -1;
    
    if(arr[0]==0 && arr[1]==1) return 1;
    
    
    
    
    int mid=0,l=0,r=arr.size()-1;
    
    while(l<=r)
    {
        mid=(l+r)/2;
        
        if(arr[mid]==0 && arr[mid+1]==1)
        {
            return mid+1;
        }
        else if(arr[mid]==0)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int>arr={0,0,0,0,1,1,1};

    cout<<" Array : ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"The first 1 occurs at index = "<<firstIndex(arr);

    return 0;

}