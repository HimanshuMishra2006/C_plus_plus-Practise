//BINARY SUBARRAY SEARCH;
//Time Complexity: O(n^2);
#include<iostream>
using namespace std;
 int main(){
    int arr[]={1,0,1,0,1,0,1};
    int goal=2,count=0,sum;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum==goal){
                count++;
            }
        }}
        cout<<"No. of Subarrays with sum="<<goal<<" is:"<<count<<endl;
        return 0;
    }
