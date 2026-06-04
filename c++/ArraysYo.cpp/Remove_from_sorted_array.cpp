#include<iostream>
using namespace std;
#include<vector>

vector<int> removeDuplicates(vector<int> &arr)
{

    /*
    Brute Force;
    
    vector<int> New;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            New.push_back(arr[i]);
        }
    }*/
    
    int r=arr.size()-1,l=r-1;
    while(r>0)
    {
        if(arr[l]==arr[r])
        {
            arr.erase(arr.begin()+r);
            r--;
            l--;
        }
        else
        {
            r--;l--;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr;
    int x;
    cout<<"Enter array elements, leaving one,every element occurs even times (ctrl+z to stop) : "<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<" required array  : ";
    vector<int> result = removeDuplicates(arr);

    for(int i:result)
    {
        cout<<i<<" ";
    }
}