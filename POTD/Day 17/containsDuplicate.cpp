/*
Given an integer array nums and an integer k, return true if there are two distinct
indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
Time Complexity : O(n)
Space Complexity : O(n)
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=nums.size();
        int no;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){mp[nums[i]]++;}
        for(auto i:mp){if(i.second>=2){no=i.first;}}
        vector<int> x;
        for(int i=0;i<n;i++){
            if(nums[i]==no){
                x.push_back(i);
            }
        }
        for(int i=1;i<x.size();i++){
            if(abs(x[i]-x[i-1])<=k){
                return true;
            }
        }
        return false;
    }
};