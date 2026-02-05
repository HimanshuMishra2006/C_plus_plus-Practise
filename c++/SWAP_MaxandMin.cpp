#include<iostream>
using namespace std;
 
int main()

{
    int arr[]={3,2,9,4,5,1,7,8,6};
    int a,b;
    int size=sizeof(arr)/sizeof(arr[0]);
    int g=arr[1],s=arr[1];
    cout<<"Before Swapping:";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
    for(int i=0;i<size;i++){
        if(arr[i]>g){
            g=arr[i];
            a=i;
            
        }
    }
    cout<<"Maximum value is : "<<g<<endl;
for(int j=0;j<size;j++){
    if(arr[j]<s){
        s=arr[j];
        b=j;
    }
}
cout<<"Minimum value is : "<<s<<endl;
swap(arr[a],arr[b]);
cout<<"After Swapping: ";
for(int i=0;i<size;i++){
  cout<<arr[i]<<" ";
}
return 0;
}