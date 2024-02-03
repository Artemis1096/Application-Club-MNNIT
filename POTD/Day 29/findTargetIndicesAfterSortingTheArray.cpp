/*
You are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.

Return a list of the target indices of nums after sorting nums in non-decreasing order. 
If there are no target indices, return an empty list. 
The returned list must be sorted in increasing order.

Time Complexity : O(nlogn)
Space Complexity : O(1)
*/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0,high=n-1;
        vector<int> x;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                x.push_back(mid);
                int j = mid - 1;
                while (j >= 0 && nums[j] == target) {
                    x.push_back(j);
                    j--;
                }
                j = mid + 1;
                while (j < n && nums[j] == target) {
                    x.push_back(j);
                    j++;
                }
                sort(x.begin(),x.end());
                return x;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        sort(x.begin(),x.end());
        return x;
    }
};