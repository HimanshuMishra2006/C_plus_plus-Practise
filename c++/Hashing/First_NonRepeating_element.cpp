#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

int firstNonRepeating(vector<int>& arr) {
        
        unordered_map<int,int>res;
        
        for(int i=0;i<arr.size();i++)
        {
            res[arr[i]]+=1;
        }
        
        for(int it:arr)
        {
            if(res[it]==1)return it;
        }
        
        return 0;
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

    cout<<"First non-repeating element : "<<firstNonRepeating(arr);
}