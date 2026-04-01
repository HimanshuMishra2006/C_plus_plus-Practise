#include<iostream>
using namespace std;
#include<vector>
#include<map>

vector<int> findMajority(vector<int>& arr)
{
        // Code here
        map<int,int> mpp;
        vector<int>result;
        
        for(int i:arr)
        {
            mpp[i]+=1;
            
        }
        
        for(auto it:mpp)
        {
            if(it.second>arr.size()/3){
                result.push_back(it.first);
            }
        }
        
        return result;
}

int main()
{
    //input
    vector<int>a;
    int x;
    cout<<"Enter array elements: "<<endl;
    while(cin>>x)
    {
      a.push_back(x);  
    }

    vector<int>result=findMajority(a);

    cout<<"Majority Elements are : "<<endl;

    for(int i:result)
    {
        cout<<i<<" ";
    }
    
    return 0;
    
}