/*
You are given two non-increasing 0-indexed integer arrays nums1​​​​​​ and nums2​​​​​​.

A pair of indices (i, j), where 0 <= i < nums1.length and 0 <= j < nums2.length, is valid if both i <= j and nums1[i] <= nums2[j]. The distance of the pair is j - i​​​​.

Return the maximum distance of any valid pair (i, j). If there are no valid pairs, return 0.

An array arr is non-increasing if arr[i-1] >= arr[i] for every 1 <= i < arr.length.

Time Complexity : O(nlogn)
Space Complexity :O(1)
*/
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size(),dist=0;
        for(int i=0;i<n1;i++){
            int x=nums1[i],idx;
            int low=0,high=n2-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums2[mid]>=x){
                    dist=max(mid-i,dist);
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return dist;
    }
};

/* 2 pointer solution */

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size(),dist=0;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
                i++;
            }
            else{
                dist=max(dist,j-i);
                j++;
            }
        }
        return dist;
    }
};