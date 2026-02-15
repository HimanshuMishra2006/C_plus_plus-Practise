#include<iostream>
using namespace std;
//sum to n;
int main(){

    int n,sum=0,i=0;

    cout<<"ENTER A NUMBER: ";
    cin>>n;cout<<endl;

    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum;

    return 0;
}