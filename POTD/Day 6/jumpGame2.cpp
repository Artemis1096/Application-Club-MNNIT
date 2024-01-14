/*
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].
Each element nums[i] represents the maximum length of a forward jump from index i. 
In other words, if you are at nums[i], you can jump to any nums[i + j] where:
    0 <= j <= nums[i] and
    i + j < n
Return the minimum number of jumps to reach nums[n - 1]. 
The test cases are generated such that you can reach nums[n - 1].
Time Complexity : O(n)
Space Complexity : O(1)
*/
int jump(vector<int>& nums) {
        int n=nums.size();
        int jumps=0,cur=0,mx=0;
        for(int i=0;i<(n-1);i++){
            mx=max(mx,i+nums[i]);
            if(i==cur){
                jumps++;
                cur=mx;
            }
        }
        return jumps;
    }