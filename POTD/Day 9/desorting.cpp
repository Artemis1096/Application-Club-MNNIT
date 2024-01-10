/*
Call an array 𝑎 of length 𝑛 sorted if 𝑎1≤𝑎2≤…≤𝑎𝑛−1≤𝑎𝑛
Ntarsis has an array 𝑎 of length 𝑛
He is allowed to perform one type of operation on it (zero or more times):
Choose an index 𝑖
(1≤𝑖≤𝑛−1).
Add 1 to 𝑎1,𝑎2,…,𝑎𝑖
Subtract 1 from 𝑎𝑖+1,𝑎𝑖+2,…,𝑎𝑛
The values of 𝑎 can be negative after an operation.Determine the minimum operations needed to make 𝑎 not sorted.
*/
#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){if(arr[i]<arr[i-1]){return false;}}
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool x=isSorted(arr,n);
        if(!x){
            cout<<"0 ";
            continue;
        }
        else{
            for(int i=0;i<(n-1);i++){
                
            }
        }
    }
    return 0;
}
