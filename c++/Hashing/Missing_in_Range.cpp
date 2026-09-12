#include<iostream>
using namespace std;
#include<vector>


vector<int> missingRange(vector<int>& arr, int low, int high)
{

    vector<int>res(high+1,0);
    vector<int>result;

    for(int i:arr)
    {
        if(i>=low && i<=high)
        {
            res[i]=i;
        }
    } 
    
    for(int i=low;i<=high;i++)
    {
        if(res[i]==0)
        {
            result.push_back(i);
        }
    }

    return result;
    
}

int main()
{
    int low=10,high=15;
    vector<int>arr={10, 12, 11, 15};
    vector<int>result=missingRange(arr,low,high);

    cout<<"Original Array : ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"ELements in range "<<low<<" to "<<high<<" not present in array are : ";

    for(int i:result)
    {
        cout<<i<<" ";
    }
}