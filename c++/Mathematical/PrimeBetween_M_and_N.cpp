#include<iostream>
using namespace std;
#include<math.h>
#include<vector>

bool isPrime(int n)
{
    
    if(n==2) return true;
    if(n==1) return false;
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    
    return true;
}
    
vector<int> primeRange(int M, int N) {
   
    vector<int>PrimeInRange;
    
    for(int i=M;i<=N;i++)
    {
            if(isPrime(i))
            {
                PrimeInRange.push_back(i);
            }
    }
    
    return  PrimeInRange;

}

int main() {

    int M , N ;
    cout<<"Enter two numbers : "<<endl;
    cin>>M>>N;
    vector<int> primes = primeRange(M, N);

    cout << "Primes between " << M << " and " << N << " are: ";
    for (int p : primes)
    {
        cout << p << " ";
    }
    return 0;
}
