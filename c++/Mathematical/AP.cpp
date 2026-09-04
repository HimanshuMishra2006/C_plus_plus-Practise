#include<iostream>
using namespace std;

int inSequence(int a, int b, int c) {

    float n=(b-a)%c;
    if(n==0) return 1;
    return 0;
        
}

int main()
{
    int a,b,c;
    cout<<"Enter a,b and c :"<<endl;
    cin>>a>>b>>c;
    
   if(inSequence(a,b,c))
   {
    cout<<"yes it exists";
   }
   else{
    cout<<"Does not exists";
   }
}