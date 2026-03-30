#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void insertionSort(vector<int>& arr) {
    // code here
    for(int i=1;i<arr.size();i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
                swap(arr[j],arr[j-1]);
                j--;
        }
    }
}

int main()
{
    vector<int> arr;
    int x;
    cout<<"Enter arr elements(ctrl+Z+Enter to stop):";
    while(cin>>x)
    {
       arr.push_back(x);
    }
    cout<<"Sorted Array:"<<endl;
    insertionSort(arr);

    for(int it:arr)
    {
        cout<<it<<" ";
    }

}