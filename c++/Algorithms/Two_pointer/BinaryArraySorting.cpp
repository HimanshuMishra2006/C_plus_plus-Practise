#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

 void binSort(vector<int> &arr)
 {
    int l=0,r=1;
    
    while(r<arr.size())
    {
        if(arr[l]==1 && arr[r]!=1)
        {
            swap(arr[l],arr[r]);
            l++;
        }
        else if(arr[l]!=1)
        {
            l++;
        }
        r++;
    }
}

int main()
{
    vector<int>arr;
    int x;
    cout<<"Enter 0's and 1's in the array(stop using ctrl+z):"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"Array : ";

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    cout<<"After sorting : ";
    binSort(arr);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;


}