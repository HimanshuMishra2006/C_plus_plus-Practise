#include<iostream>
using namespace std;

/*Given three integers p, r and t, denoting Principal, Rate of Interest and Time 
period respectively. Your task is to calculate Simple Interest.
*/

double simpleInterest(int P, int R, int T) {
        // code here
        double SI=(P*R*T)/double(100);
        return SI;
}

int main()
{
    int P,R,T;
    cout<<"Enter Principal amount(P):";
    cin>>P;

    cout<<"Enter Rate of Interest(R):";
    cin>>R;

    cout<<"Enter Time Period(T):";
    cin>>T;

    cout<<"Simple Interest = "<<simpleInterest(P,R,T);
}