#include<iostream>
using namespace std;
#include<vector>

void insertAtEnd(vector<int> &arr, int val) {
        // code here
        arr.push_back(val);
}
void display(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> a={1,3,6,5,8,9};
    cout<<"Before Inserting:";
    display(a);
    cout<<endl;
    insertAtEnd(a,50);
    cout<<"After Inserting:";
    display(a);
}