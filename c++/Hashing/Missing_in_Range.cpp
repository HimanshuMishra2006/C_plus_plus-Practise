#include<iostream>
using namespace std;
#include<vector>
#include<unordered_set>


vector<int> missingRange(vector<int>& arr, int low, int high)
{

    unordered_set<int> store;
    vector<int>result;

    for(int i:arr)
    {
        if(i>=low && i<=high)
        {
            store.insert(i);
        }
        
    }

    for(int i=low;i<=high;i++)
    {
        if(store.find(i)==store.end())
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