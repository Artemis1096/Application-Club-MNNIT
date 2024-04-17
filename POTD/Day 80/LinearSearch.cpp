// Linear Search 
// Time Complexity : O(n)
// Space Complexity : O(1)
class Solution {
  public:
    int solve(int n,int k,vector<int> arr){
        if(n==0){
            return -1;
        }
        if(arr[n-1]==k){
            return n-1;
        }
        solve(n-1,k,arr);
    }
    int search(int n, int k, vector<int> &arr) {
        int id=solve(n,k,arr);
        return id;
    }
};