/*
Given a 0-indexed integer array nums of length n and an integer target, 
return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target. 
Time complexity:O(logn)
*/
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int count=0;
        int low=0,high=nums.size()-1;
            while(low<high){
                if(nums[low]+nums[high]<target){
                    count+=(high-low);
                    low++;
                }
                else{
                    high--;
                }
            }
        return count;
    }
};