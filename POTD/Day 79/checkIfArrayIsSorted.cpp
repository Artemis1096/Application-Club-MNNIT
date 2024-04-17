/*
    Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 
    Time Complexity : O(n)
    Space Complexity : O(n) 
*/
class Solution {
  public:
    bool solve(int i,int n,int arr[]){
        if(i==n){
            return true;
        }
        return (arr[i]>=arr[i-1]) && solve(i+1,n,arr);
    }
    bool arraySortedOrNot(int arr[], int n) {
        if(n==1){return true;}
        int i=1;
        return (solve(i,n-1,arr));
    }
};