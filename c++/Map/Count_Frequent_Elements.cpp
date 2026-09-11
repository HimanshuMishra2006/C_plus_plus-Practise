#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

int countOccurence(vector<int>& arr, int k)
{
       
    unordered_map<int,int>mpp;
    int count=0;
    
    for(int i:arr)
    {
        mpp[i]++;
    }
    
    for(auto it:mpp)
    {
        if(it.second > arr.size()/k)
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
    vector<int>arr;
    int x,k;

    cout<<"Enter k:";
    cin>>k;
    //input
    cout<<"Enter inputs(press ctrl+z and enter to terminate inputs):"<<endl;

    while(cin>>x )
    {
        arr.push_back(x);
    
    }
    cout<<"Frequency of elements occuring more than given pivot is "<<countOccurence(arr,k);

}

