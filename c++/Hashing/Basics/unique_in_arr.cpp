#include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>

int countDistinct(vector<int>& arr)
{
        
    unordered_set<int> unique;
    
    for(int x : arr)
    {
        unique.insert(x);
    }
    
    return unique.size();
}

int main()
{
    //input
    vector<int>arr;
    int x;
    
    cout<<"Enter array elements(ctrl+z to stop): "<<endl;
    while(cin>>x)
    {
      arr.push_back(x);  
    }

    cout<<"Number of unique elements in arr : "<<countDistinct(arr);
 

}