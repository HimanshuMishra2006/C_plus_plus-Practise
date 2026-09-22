#include<iostream>
using namespace std;
#include<vector>

int findFloor(vector<int>& arr, int x)
{       
    int l=0,r=arr.size()-1;
    int ans=-1;
    
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        
        if(arr[mid]<=x)
        {
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]>x)
        {
            r=mid-1;
        }
    }
    
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 6, 10};  // Example sorted array
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int idx = findFloor(arr, x);

    if (idx == -1) {
        cout << "No floor exists for " << x << " in the array." << endl;
    } else {
        cout << "Floor of " << x << " is " << arr[idx] 
             << " at index " << idx << endl;
    }

    return 0;
}