#include<iostream>
using namespace std;

void pattern(int n)
{
for(int i=0;i<n/2;i++)
    {
            for(int j=0;j<=i;j++)
            {
                if(j==i){
                cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            
            for(int k=0;k<n-(2*i+1);k++)
            {
                cout<<" ";
            }
            cout<<"*";
            
            cout<<endl;
        }

        for(int i=0;i<n/2;i++)
        {
            for(int j=0 ; j<n/2 ; j++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
            
            
        }
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    pattern(n);
}