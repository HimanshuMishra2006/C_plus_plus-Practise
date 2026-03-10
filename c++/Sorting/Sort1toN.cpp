#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<int> sortArray(vector<int>& arr) {

int maximum=0;//n
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                maximum=max(maximum,arr[i]);
            }
        }
        
        for(int i=0;i<maximum;i++)
        {
            arr[i]=i+1;
        }
        return arr;
    }
  
int main()
{
    vector<int>a={1,4,6,8,2,5,3,7};
    
    cout<<"Original Array:";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }    cout<<endl;
    
    vector<int> res =sortArray(a);
    cout<<"Sorted Array:";
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }    
}    