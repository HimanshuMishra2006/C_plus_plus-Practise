#include<iostream>
using namespace std;
#include<vector>

vector<int> fibonacciNumbers(int n) {
        // code here
        int t1=0,t2=t1+1,nexterm=t1+t2;
        vector<int>result;
        if(n==1){
        result.emplace_back(t1);
        return result;
        }
         result.emplace_back(t1);
         result.emplace_back(t2);
        while(result.size()<n)
        {
            nexterm=t1+t2;
            result.emplace_back(nexterm);
            t1=t2;
            t2=nexterm;
        }
        return result;
}

int main()
{
    cout<<"Enter value  of n:";
    int n;
    cin>>n;

    cout<<"Fibbonacci series: ";
    vector<int>result=fibonacciNumbers(n);

    for(int x:result)
    {
        cout<<x<<" ";
    }
}
