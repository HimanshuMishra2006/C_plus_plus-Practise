#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int thirdLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=arr[n-1],sl=INT16_MIN,tl=INT16_MIN;
        
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>largest)
            {
                tl=sl;
                sl=largest;
                largest=arr[i];
            }
            else if(arr[i]>sl && arr[i]<=largest)
            {
                tl=sl;
                sl=arr[i];
            }
            else if(arr[i]>tl && arr[i]<=sl)
            {
                tl=arr[i];
            }
        }
        
        if(tl==INT16_MIN)return -1;
        
        return tl;
}

int main()
{
    vector<int> arr;
    int x;
    cout<<"Enter array elements:(ctrl+z to stop)"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"Third Largest element in array:"<<thirdLargest(arr);
}