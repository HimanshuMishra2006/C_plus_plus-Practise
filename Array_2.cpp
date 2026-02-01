#include<iostream>
using namespace std;
int main()
{
    int a[15]={0};

    a[0]=10,a[14]=150;
    
    for(int i=0;i<=14;i++){
    cout<<a[i]<<endl;
    }
    int ab[5]={1,2,3,4,5};
    int bc[5]={5,4,3,2,1};
    int cd[5];
    for(int i=0;i<=4;i++){
    cd[i]=ab[i]+bc[i];
    cout<<cd[i]<<endl;
    cout<<&cd[i]<<endl;
    }
    int nums[4]={7,2,3,4};
    int target[1]={9};
    cout<<&nums[0]<<endl;

    int arr[5]={1,1,4,4,5};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(arr[i]!=arr[j]){
            cout<<arr[j]<<" ";
        }
    }
}
    return 0;
}