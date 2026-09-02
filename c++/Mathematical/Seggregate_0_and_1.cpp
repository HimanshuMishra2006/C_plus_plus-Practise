#include<iostream>
using namespace std;
#include<math.h>
#include<vector>

 void segregate0and1(vector<int> &arr) {
        
        
        int l=0,r=arr.size()-1;
        
        while(l<=r)
        {
            if(arr[l]==1 && arr[r]==0)
            {
                swap(arr[l],arr[r]);
                l++;
                r--;
            }
            else if(arr[l]==0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
}

int main() {

    vector<int> arr;
    int z;

    //input
    cout<<"Enter only 0's and 1's (press ctrl+z and enter to terminate inputs) :"<<endl;

    while(cin>>z)
    {
        arr.push_back(z);
    }

    cout<<"Original Array: ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    segregate0and1(arr);

    cout<<"Seggregated Array : ";

    for (int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
