/*
    Karina has an array of 𝑛 integers 𝑎1,𝑎2,𝑎3,…,𝑎𝑛. 
    She loves multiplying numbers, so she decided that the beauty of a pair of numbers is their product. 
    And the beauty of an array is the maximum beauty of a pair of adjacent elements in the array.

    For example, for 𝑛=4, 𝑎=[3,5,7,4], the beauty of the array is max(3⋅5, 5⋅7, 7⋅4) = max(15, 35, 28) = 35
    Karina wants her array to be as beautiful as possible. In order to achieve her goal, 
    she can remove some elements (possibly zero) from the array. 

    After Karina removes all elements she wants to, the array must contain at least two elements.
    Unfortunately, Karina doesn't have enough time to do all her tasks, 
    so she asks you to calculate the maximum beauty of the array that she can get by removing any 
    number of elements (possibly zero).
    Time Complexity : O(nlogn);
    Space Complexity : O(n)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<long long> arr;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        long long val=max((arr[0]*arr[1]),(arr[n-1]*arr[n-2]));
        cout<<val<<endl;
    }
    return 0;
}