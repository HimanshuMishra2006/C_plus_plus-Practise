#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void segregateElements(vector<int>& arr) {
        
    vector<int>pos;
    vector<int>neg;
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<neg.size();i++)
    {
        pos.push_back(neg[i]);
    }
    
    for(int i=0;i<arr.size();i++)
       {
           arr[i]=pos[i];
       }
}

int main()
{
    vector<int>arr;
    int x;
    cout<<"Enter +ve and -ve elements in the array(stop using ctrl+z):"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<endl;

    cout<<"Original Array : ";

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    cout<<"After moving zeroes to end : ";
    segregateElements(arr);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}