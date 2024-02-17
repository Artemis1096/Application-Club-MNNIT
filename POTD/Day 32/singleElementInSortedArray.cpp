/*
You are given a sorted array consisting of only integers where every element appears exactly twice, 
except for one element which appears exactly once.

Return the single element that appears only once.

Time Complexity : O(logn)
*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int low=0,high=nums.size()-1,no,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            no=(mid%2==0)?mid+1:mid-1;
            if(nums[mid]==nums[no]){low=mid+1;}
            else{high=mid-1;}
        }
        return nums[low];
    }
};