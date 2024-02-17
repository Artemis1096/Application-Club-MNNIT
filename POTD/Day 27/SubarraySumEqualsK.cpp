/*
Given an array of integers nums and an integer k, 
return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Time Complexity : O(n)
Space Complexity : O(n)
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    int count=0;
    int sum=0;
    mp[0]++;
    for(auto it:nums){
        sum+=it;
        if(mp.find(sum-k)!=mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
    }
};