#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

// if arr={1,2,3,4,5} , resuktant arr ={14,13,12,11,10};
// i.e. sum of array at index i, leaving arr[i];

void sumArray(vector<int> &arr) {

    int sum=0;

    //array sum
    for(int x:arr)
    {
        sum+=x;
    }

    //sum of array(sum) - arr[i];
    for(int i=0;i<arr.size();i++)
    {
        arr[i]=sum-arr[i];
    }
}

int main()
{
    vector<int> arr;
    int x;

    //input
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

