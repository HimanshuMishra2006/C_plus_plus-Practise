#include<iostream>
using namespace std;
#include<unordered_map>

/*Given a string S. Count the characters
 that have ‘N’ number of occurrences. 
 If a character appears consecutively it is counted as 1 occurrence.*/

 int getCount(string S, int N) {
        // code here.
        unordered_map<int,int> mpp;
        int count=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]==S[i+1])
            {
                continue;
            }
            else
            {
            mpp[S[i]]++;
            }
        }
        for(auto it:mpp)
        {
            if(it.second==N)
            {
                count++;
            }
        }
        return count;
}

int main() {
    string s ;
    int N;
    cout<<"Enter a string:";
    cin>>s;

    cout<<"Enter a number:";
    cin>>N;

    cout << "number of  characters(N) times : " << getCount(s,N) << endl; // Output: 'a'
    return 0;
}