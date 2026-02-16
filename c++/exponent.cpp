#include<iostream>
using namespace std;
//n^p;
int main(){
    int n,p;
    cout<<"Enter a number:";
    cin>>n ;
    cout<<endl;
    cout<<"Enter its power:";
    cin>>p;
    cout<<endl;
    int power=1;

    for(int i=1;i<=p;i++){
        power=power*n;
    }
    cout<<"("<<n<<")^"<<p<< " is ="<<power;
    cout<<endl;
    return 0;

}