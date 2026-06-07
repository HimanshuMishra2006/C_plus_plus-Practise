#include<iostream>
using namespace std;
#include<vector>

void swapKth(vector<int> &arr, int k) {
        // code here
        swap(arr[k-1],arr[arr.size()-k]);
}

int main()
{
    int k;
    int x;
    cout<<"Enter k:";
    cin>>k;

    int size;
    cout<<"Enter size :";
    cin>>size;
    
    vector<int> arr;

    cout<<"Enter array Elements:"<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    swapKth(arr,k);
    
    cout<<"After swapping : ";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}