#include<iostream>
using namespace std;
#include<vector>
void printArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
    }


int main(){
    vector<int>vec={1,5,7,0,9,5,6,8};
    printArray(vec);

}