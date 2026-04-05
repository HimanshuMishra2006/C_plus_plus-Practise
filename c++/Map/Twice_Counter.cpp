#include<iostream>
using namespace std;
#include<unordered_map>

int countWords(string list[], int n)
{
    // code here.
    unordered_map<string,int> mpp;
    int count=0;
    for(int i=0;i<n;i++)
    {
        mpp[list[i]]++;
    }
        
    for(auto it:mpp)
    {
        if(it.second==2) count++;
    }
    return count;
}

int main()
{
    string list[]={"hello","two","number","hello","number"};
    int n=sizeof(list) / sizeof(list[0]);

    cout<<"No. of words appearing exactly twice:"<<countWords(list,n);
}