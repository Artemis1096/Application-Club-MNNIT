/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.
You can return the answer in any order.
Time Complexity : O(n*logn)
Space Complexity : O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=nums.size();
        int i=0,j=n-1;
        vector<pair<int,int>> x;
        for(int i=0;i<n;i++){x.push_back({nums[i],i});};
        sort(x.begin(),x.end());
        while(i<j){
            int sum=x[i].first+x[j].first;
            if(sum==target){
                return {x[i].second,x[j].second};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};