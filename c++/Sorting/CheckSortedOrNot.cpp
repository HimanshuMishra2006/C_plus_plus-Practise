#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1]){
               return false;
            }
        }
        
        return true;
    }
int main()
{
    int size;
    cout<<"Enter size:";
    cin>>size;
    vector<int>arr(size);
    
    cout<<"Enter Array elements:"<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    if(isSorted(arr))
    {
        cout<<"sorted";
    }else{
        cout<<"Not sorted";
    }

    
}