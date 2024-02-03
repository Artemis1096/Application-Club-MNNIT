/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times.
Given the sorted rotated array nums of unique elements, return the minimum element of this array.
Time Complexity : O(logn)
Space Complexity : O(1)
Aditya Verma Approach
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int low=0,high=nums.size()-1,m=INT_MAX,n=nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[low]<nums[high]){
            return nums[low];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid<(n-1) && mid>0 && nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                return nums[mid];
            }
            if (nums[low] <= nums[high]) {
                m = nums[low];
                break;
            }
            if(nums[mid]<nums[low]){
                high=mid-1;
            }
            else if(nums[mid]>nums[high]){
                low=mid+1;
            }
        }
        return m;
    }
};