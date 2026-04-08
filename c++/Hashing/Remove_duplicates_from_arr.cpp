#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

/*Given an array arr[] consisting of positive integers,
 return the array by removing all duplicate numbers.*/
 
vector<int> remDuplicate(vector<int>& arr)
{
        // code here
        unordered_map<int,int> mpp;
        vector<int>result;
        
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        
        for(auto it:mpp)
        {
            result.push_back(it.first);
        }
        
        return result;
}

int main()
{
    //input
    vector<int>a;
    int x;
    cout<<"Enter array elements(ctrl+z to stop): "<<endl;
    while(cin>>x)
    {
      a.push_back(x);  
    }

    vector<int>result=remDuplicate(a);

    cout<<"After removing all duplicates: : "<<endl;

    for(int i:result)
    {
        cout<<i<<" ";
    }
    
    return 0;
    
}