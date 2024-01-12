/*
You are given an integer 𝑛. Find a sequence of 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 such that 1≤𝑎𝑖≤109 for all 𝑖 and
𝑎1⊕𝑎2⊕⋯⊕𝑎𝑛=𝑎1+𝑎2+⋯+𝑎𝑛/𝑛,
where ⊕

represents the bitwise XOR.

It can be proven that there exists a sequence of integers that satisfies all the conditions above.

Approach:- 
if the n is odd then simply just return n times 1
if the n is even then first return 1 3 then return n-2 times 2
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        if(n%2!=0){
            for(int i=0;i<n;i++){
                cout<<"1 ";
            }
        }
        else{
            cout<<"1 3 ";
            for(int i=2;i<n;i++){
                cout<<"2 ";
            }
        }
    }    
    return 0;
}
