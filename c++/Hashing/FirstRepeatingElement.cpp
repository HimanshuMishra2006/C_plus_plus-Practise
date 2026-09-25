#include<iostream>
using namespace std;
#include<unordered_map>
#include<unordered_set>
#include<vector>

int firstRepeated(vector<int> &arr)
{
        
    unordered_map<int,int> elemFreq;
    unordered_set<int> res;
    
    for(int el : arr)
    {
        elemFreq[el]++;
        
        if(elemFreq[el]==2)
        {
            res.insert(el);
        }
    }
    
    for(int i=0;i<arr.size();i++)
    {
        if(res.find(arr[i])!=res.end())
        {
            return arr[i];
        }
    }
    
    return -1;
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


    cout<<"First eLement repeating twice  : "<<firstRepeated(arr);

}
