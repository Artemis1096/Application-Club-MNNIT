/*
You are given a 0-indexed integer array nums and an integer threshold.

Find the length of the longest subarray of nums starting at index l and ending at
index r (0 <= l <= r < nums.length) that satisfies the following conditions:
    nums[l] % 2 == 0
    For all indices i in the range [l, r - 1], nums[i] % 2 != nums[i + 1] % 2
    For all indices i in the range [l, r], nums[i] <= threshold
Return an integer denoting the length of the longest such subarray.
Time Complexity : O(n)
Space Complexity : O(1)
*/
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int th) {
        int i=0,j=0,n=nums.size(),maxi=0,flag=0;
        while(j<n){
            if(flag==0){
                // new window initialization
                if(nums[j]%2==0 && nums[j]<=th){
                    i=j;
                    maxi=max(maxi,j-i+1);
                    flag=1;
                }
            }
            else if(flag==1){
                int x=nums[j-1],y=nums[j];
                int c=x+y;
                if(c%2 && nums[j]<=th){
                    maxi=max(maxi,j-i+1);
                }
                else{
                    flag=0;
                    j--;
                }
            }
            j++;
        }
        return maxi;
    }
};