// Given an array nums containing n distinct numbers in the range [0, n], 
//return the only number in the range that is missing from the array.
#include <vector>
int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int r=nums.size();
        for(int i=0;i<n;i++){
            r^=i;
            r^=nums[i];
        }
        return r;
}