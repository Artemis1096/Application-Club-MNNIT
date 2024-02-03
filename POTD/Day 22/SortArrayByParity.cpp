/*
Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
Return any answer array that satisfies this condition.

Time Complexity : O(n)
Space Complexity : O(1)
*/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> x(n);
        int i=0,j=1,counter=0;
        while(i<n || j<n){
            if(nums[counter]%2==0 && i<n){
                x[i]=nums[counter];
                i+=2;
            }
            if(nums[counter]%2!=0 && j<n){
                x[j]=nums[counter];
                j+=2;
            }
            counter++;
        }
        return x;
    }
};