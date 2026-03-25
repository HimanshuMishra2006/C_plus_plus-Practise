#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
 int maxProfit(vector<int> &prices) {
        // code here
        int minm=INT16_MAX, maxProfit=0;
        for(int p:prices)
        {
          minm=min(minm,p);
          maxProfit=max(maxProfit,p-minm);
        }
        return maxProfit;
}

int main()
{
    vector<int> vec={7,1,5,13,6,4};
    cout<<"Maximum Profit is of:"<<maxProfit(vec);
}