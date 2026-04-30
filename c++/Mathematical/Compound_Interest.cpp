#include<iostream>
#include<math.h>
using namespace std;
/*Calculate the amount for given principal amount P ,
time T(in years), compounded N times in a year at rate R.
Calculate floor of future value of given principal amount.
*/
int getCompundInterest(int P, int T, int N, int R) {
        
    int amount=P*(pow(1+R/(N*100.00),T*N));
        
    return amount;
}

int main()
{
    int P,R,T,N;
    cout<<"Enter P,R,T and N:"<<endl;
    cin>>P>>R>>T>>N;
    
    int amount=getCompundInterest(P,R,T,N);

    cout<<"Amount :"<<amount<<endl;
    cout<<"Compound Interest:"<<amount-P;
}