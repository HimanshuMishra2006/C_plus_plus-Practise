#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
#include<algorithm>

vector<int> getDivisors(int n) {
        
    if(n==1) return {1};
    if(n==0) return {0};
    
    vector<int>div1;
    vector<int>div2;
    
    div1.push_back(1);
    div2.push_back(n);
    
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            div1.push_back(i);
            if(i!=n/i)
            {
                div2.push_back(n/i);
            }
        }
    }
        
    reverse(div2.begin(),div2.end());
    
    for(int i:div2)
    {
        div1.push_back(i);
    }
    
    return div1;
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    vector<int> divisors = getDivisors(num);

    cout<<"Divisors of "<<num<<" : ";
    for(int x : divisors)
    {
        cout<<x<<" ";
    }
}