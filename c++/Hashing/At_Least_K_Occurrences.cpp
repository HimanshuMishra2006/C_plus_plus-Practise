#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
#include<algorithm>

 int firstElementKTime(vector<int>& arr, int k) {
        
        int maxVal=*max_element(arr.begin(),arr.end());
        vector<int> res(maxVal+1,0);
        
        for(int x:arr)
        {
            res[x]++;
            if(res[x]==k) return x;
        }
        
        return -1;
    }
    
    //better
    /*
        int firstElementKTime(vector<int>& arr, int k) {
            unordered_map<int,int> freq;
            for (int x : arr) {
                freq[x]++;
                if (freq[x] == k) return x;
            }
            return -1;
        }

    */

int main()
{
    //input
    vector<int>arr;
    int x;
    int k;
    cout<<"Enter k : ";
    cin>>k;

    cout<<"Enter array elements(ctrl+z to stop): "<<endl;
    while(cin>>x)
    {
      arr.push_back(x);  
    }

    cout<<"ELement repeating atleast "<<k<<" times : "<<firstElementKTime(arr,k);

}
