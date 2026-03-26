#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//A program to print freq of all elements from 1 to n,of an array;
 vector<int> frequencyCount(vector<int>& arr) {

    int maxVal = *max_element(arr.begin(), arr.end());

    vector<int>freq(maxVal+1,0);
        for(int i:arr)
        {
            freq[i]+=1;
        } 
         vector<int>result;
        for(int i=1;i<freq.size();i++)
        {
            result.emplace_back(freq[i]);
        }
        
        return result;
}

int main()
{
    vector<int> arr;
    int x;
    int n;
    cout<<"Enter array size:";
    cin>>n;

    cout<<endl;

    //input
    cout<<"Enter inputs(press ctrl+z and enter to terminate inputs):"<<endl;

    while(cin>>x && n>0)
    {
        arr.push_back(x);
        n--;
    }
    //func calling
    vector<int>result=frequencyCount(arr);
    cout<<"Frequency of array elements:";
    for(int num:result)
    {
        cout<<num<<" ";
    }
}
