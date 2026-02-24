#include<iostream>
#include<vector>
using namespace std;

int countZeroes(vector<int> &arr) {
        // code here
        int mid=0,left=0,size=arr.size(),right=size-1;
        
        if(arr[0]==0)
        {
            return size;
        }
        int i=0;
        while(left<=right)
        {
           mid=(left+right)/2;
           
            if(arr[mid]==1){
                left=mid+1;
                //i=left;
            }else{
                right=mid-1;
                //i=right;
            }
        }
        return size-left;
    }

    int main()
    {
        vector<int> arr={1 ,1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};

        cout<<countZeroes(arr);
        return 0;


    }