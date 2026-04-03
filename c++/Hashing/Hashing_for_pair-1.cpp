#include<iostream>
using namespace std;
#include<algorithm>

bool sumExists(int arr[], int N, int sum) {
    // Your code here.
    int l=0,r=N-1;
    sort(arr,arr+N);
    while(l<r)
    {
        if(arr[l]+arr[r]==sum)return true;
        
        if(arr[l]+arr[r]>sum)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
     return false;
}

int main()
{
    int arr[]={1,3,2,5,7,8,4};
    int N=sizeof(arr)/sizeof(arr[0]);
    int sum=8;
    
    cout<<sumExists(arr,N,sum);

    
}