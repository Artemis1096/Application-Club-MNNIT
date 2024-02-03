/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot 
index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, 
return the index of target if it is in nums, or -1 if it is not in nums.

Time Complexity : O(log n)
Space Complexity : O(1)
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int low=0,high=nums.size()-1,mid;
        if(nums.size()==1){
            if(nums[0]==target){return 0;}
            else{return -1;}
        }
        if(nums[low]<nums[high]){
            //normal binary search
            while(low<=high){
                mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    high=mid-1;
                }
                else{low=mid+1;}
            }
            return -1;
        }
        else{
            low=0,high=nums.size()-1;
            int mi;
            while(low<=high){
                mid=low+(high-low)/2;
                if(mid<(nums.size()-1) && mid>0 && nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                    mi=mid;
                    break;
                }
                if(nums[low]<=nums[high]){
                    mi=low;
                    break;
                }
                if(nums[mid]<nums[low]){
                    high=mid-1;
                }
                else if(nums[mid]>nums[high]){
                    low=mid+1;
                }
            }
            // first subarray
            low=0,high=mi-1;
            while(low<=high){
                mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    high=mid-1;
                }
                else{low=mid+1;}
            }
            // second subarray
            low=mi,high=nums.size()-1;
            while(low<=high){
                mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    high=mid-1;
                }
                else{low=mid+1;}
            }
            return -1;
        }
    }
};