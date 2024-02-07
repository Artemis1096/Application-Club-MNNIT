/*
    Given an array nums containing n distinct numbers in the range [0, n], 
    return the only number in the range that is missing from the array.
    Time Complexity : O(nlogn)
    Space Complexity : O(1)
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n;i++){
            int low=0,high=n-1,idx=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==i){idx=mid;break;}
                else if(nums[mid]<i){low=mid+1;}
                else{high=mid-1;}
            }
            if(idx==-1){
                return i;
            }
        }
        return -1;
    }
};