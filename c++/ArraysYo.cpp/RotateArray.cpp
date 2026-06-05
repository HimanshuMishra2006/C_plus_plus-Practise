#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void rotateArr(vector<int>& arr, int d)
    {
         d=d%arr.size();

         reverse(arr.begin(),arr.begin()+d);
         reverse(arr.begin()+d,arr.end());
         reverse(arr.begin(),arr.end());
    }

int main()
{
    vector<int> arr;
    int x,d;
    cout<<"Enter value of d :";
    cin>>d;
    cout<<"Enter array elements, leaving one,every element occurs even times:(ctrl+z to stop)"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }
     
    
    for(int i:arr)
    {
        cout<<arr[i]<<" ";
    }
    rotateArr(arr,d);

    for(int i:arr)
    {
        cout<<arr[i]<<" ";
    }
}