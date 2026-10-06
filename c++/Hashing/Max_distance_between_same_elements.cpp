#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

int maxDistance(vector<int> &arr)
{
        
    unordered_map<int,int> mpp;
    int max_dis = 0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(mpp.find(arr[i])==mpp.end())
        {
            mpp[arr[i]]=i;
        }
        else
        {
            int dis=i-mpp[arr[i]];
            max_dis = max(max_dis,dis);
        }
    }
    
    return max_dis;
        
}

int main()
{
    //input
    vector<int>arr = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2} ;

    int max_dis = maxDistance(arr);

    cout<<"max distance is : "<<maxDistance(arr)<<endl;
    
    return 0;
    
}
