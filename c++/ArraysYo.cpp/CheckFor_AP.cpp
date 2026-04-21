#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

bool checkIsAP(vector<int> &arr)
{
    // Your code goes here
    sort(arr.begin(),arr.end());        int diff=arr[1]-arr[0];
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i+1]!=arr[i]+diff)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int>arr1={2,4,6,8,10};
    vector<int>arr2={1,2,3,4,6,7,8,};

    cout<<"arr1:";
    for(int num:arr1)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"arr2:";
    for(int num:arr2)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    if(checkIsAP(arr1))
    {
        cout<<"arr1 is an AP";
    }
    else{
        cout<<"arr1 is not an AP";
    }

    if(checkIsAP(arr2))
    {
        cout<<"arr2 is an AP";
    }
    else{
        cout<<"arr2 is not an AP";
    }


}