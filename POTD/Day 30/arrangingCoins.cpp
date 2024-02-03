/*
You have n coins and you want to build a staircase with these coins. 
The staircase consists of k rows where the ith row has exactly i coins. 
The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.

Time Complexity : O(logn)
Space Complexity : O(1)
*/
class Solution {
public:
    int arrangeCoins(int n) {
        int low=1,high=n,ans;
        long long mid=low+(high-low)/2;
        while(low<=high){
            long long cal=(mid)*(mid+1)/2;
            if(cal>n){
                high=mid-1;
            }
            else{
                ans=mid;
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
};