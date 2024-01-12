/*
You are given a permutation† 𝑝 of length 𝑛 and a positive integer 𝑘≤𝑛.In one operation, you:
Choose 𝑘 distinct elements 𝑝𝑖1,𝑝𝑖2,…,𝑝𝑖𝑘.
Remove them and then add them sorted in increasing order to the end of the permutation. 
For example, if 𝑝=[2,5,1,3,4]
and 𝑘=2 and you choose 5 and 3 as the elements for the operation, then [2,5,1,3,4]→[2,1,4,3,5].
Find the minimum number of operations needed to sort the permutation in increasing order. 
It can be proven that it is always possible to do so.

Time Complexity : O(n)
Space Complexity : O(n)
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<int> x;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            x.push_back(num);
        }
        int count=1;
        for(int i=0;i<n;i++){
            if(x[i]==count){count++;}
        }
        cout<<((n-count+k)/k)<<endl;
    }
    return 0;
}