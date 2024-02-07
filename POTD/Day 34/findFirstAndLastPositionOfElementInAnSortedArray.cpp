/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
Time Complexity : O(logn)
Space Complexity : O(1)
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int fp=INT_MAX,lp=INT_MIN;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                fp=min(fp,mid);
                high=mid-1;
                continue;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                lp=max(lp,mid);
                low=mid+1;
                continue;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(fp==INT_MAX && lp==INT_MIN){
            return {-1,-1};
        }
        return {fp,lp};
    }
};