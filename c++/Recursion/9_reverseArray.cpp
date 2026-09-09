#include<iostream>
using namespace std;
#include<vector>

void helper(int l,int r,vector<int>&arr)
{
    if(l>=r) return ;
        
    swap(arr[l],arr[r]);
        
    helper(l+1,r-1,arr);
}
  
void reverseArray(vector<int> &arr) {
        
    helper(0,arr.size()-1,arr);
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};

    cout<<"Original array : ";
    for(int x:arr)
    {
        cout<<x<<" ";
    }

    cout<<endl;
    reverseArray(arr);

    cout<<"after reversing : ";
    for(int x:arr)
    {
        cout<<x<<" ";
    }

}