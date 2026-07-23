#include<iostream>
using namespace std;
#include<vector>

long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        
        
    long long int totalFine=0;
    
    for(int i=0;i<car.size();i++)
    {
        if(date%2==0)
        {
            if(car[i]%2!=0)
            {
                totalFine+=fine[i];
            }
        }
        else
        {
            if(car[i]%2==0)
            {
                totalFine+=fine[i];
            }
        }
    }
    return totalFine;
}

int main()
{
    vector<int>car = {234,255,368,245,872,900};
    vector<int>fine = {200,300,560,440,908,192};
    int date=12;

    cout<<"total fine is : "<<totalFine(date,car,fine);
}