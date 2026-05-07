#include<iostream>
using namespace std;

void arrayTraversal(int numbers[], int size) {
    // Code here
    for(int i=0;i<size;i++)
    {
        cout<<numbers[i]<<" ";
    }
    
}

int main()
{
    int size;
    cout<<"Enter size:";

    cin>>size;
    int arr[size];
    
    cout<<"Enter array Elements:"<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    arrayTraversal(arr,size);

}