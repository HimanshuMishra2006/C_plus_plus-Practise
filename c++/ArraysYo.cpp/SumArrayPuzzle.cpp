#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void sumArray(vector<int> &arr) {

    int sum=0;
    
    for(int x:arr)
    {
        sum+=x;
    }
    
    for(int i=0;i<arr.size();i++)
    {
        arr[i]=sum-arr[i];
    }
}

int main()
{
    vector<int> arr;
    int x;
    cout<<"Enter array elements:(ctrl+z to stop)"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    sumArray(arr);
    cout<<"thus,required array : ";

    for(int it:arr){
        cout<<it<<" ";
    }
}

