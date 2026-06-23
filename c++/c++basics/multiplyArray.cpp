#include<iostream>
using namespace std;

int product(int arr[], int n)
{

    int product=arr[0];
    for(int i=1;i<n;i++)
    {
        product*=arr[i];
    }

    return product;
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
    cout<<"Product of  each element of array : "<<product(arr,size);

    return 0;
}
