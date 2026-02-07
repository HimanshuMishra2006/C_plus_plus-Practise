#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int arr[]={5,-2,3,-2,-67,2,-6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int strt ,end,csum;
    int msum=INT16_MIN;
    
    for(int strt=0;strt<size;strt++){
        csum=0;
        for(int end=strt;end<size;end++){
            csum+=arr[end];
                msum=max(msum,csum);
            if(msum<0){
                msum=0;
            }
       }
    }
    cout<<"Maximum Subarray Sum"<<msum;
   
    return 0;
}
