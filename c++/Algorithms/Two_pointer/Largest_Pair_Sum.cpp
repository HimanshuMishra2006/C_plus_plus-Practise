#include<iostream>
using namespace std;
#include<vector>

/*Find the largest pair sum in an array of distinct integers.
  arr = { 1,34,5,6,35};   required sum = 34+35 =69
*/


int pairsum(vector<int> &arr)
{
    int l=arr[arr.size()-1];
    int sl=arr[arr.size()-2];
    
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]<l)
        {
            sl=arr[i];
        }
    }
    cout<<"Largest element : "<<l<<endl;
    cout<<"Second Largest : "<<sl<<endl;

    return sl+l;
}

int main()
{
    vector<int>arr;
    int x;
    cout<<"Enter array elements (stop using ctrl+z):"<<endl;
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

    cout<<"Required sum = "<<pairsum(arr);
    
    return 0;
}