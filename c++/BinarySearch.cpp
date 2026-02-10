#include<iostream>
using namespace std;
//find a given target usin Binary Search;
 int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=7;
    int size=sizeof(arr)/sizeof(arr[0]);
    int mid=0,str=0,end=size-1,i;
    for(i=str;i<=end;i++){
        mid=(str+end)/2;
        if(target==arr[mid]){
            cout<<mid<<endl;
            break;
        }
        if(target>arr[mid]){
            str=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
       

    }
    cout<<"Target Found at i="<<mid;
 }
