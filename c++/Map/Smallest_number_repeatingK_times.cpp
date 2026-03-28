#include<iostream>
using namespace std;
#include<map>
#include<vector>

 int findDuplicate(const vector<int>& arr, int k) {
        // code here
        map<int,int> mpp;

        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        
        for(auto it:mpp)
        {
            if(it.second==k) return it.first;
        }
        return -1;
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
    cout<<"Smallest elem repeating "<<k<<" times is "<<findDuplicate(arr,k);

}