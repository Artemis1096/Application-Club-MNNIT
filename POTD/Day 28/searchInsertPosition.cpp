/*
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
Time Complexity : O(logn)
Space Complexity : O(1)
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]>target){
                e=m-1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else{
                return m;
            }
        }
        return e+1;
    }
};