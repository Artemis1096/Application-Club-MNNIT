/*
Binary Search
Time Complexity : O(logn)
Space Complexity : O(1)
*/
class Solution {
  public:
    int solve(int i,int j,int arr[],int k){
        if(i>j){
            return -1;
        }
        int mid=i+(j-i)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            solve(i,mid-1,arr,k);
        }
        else{
            solve(mid+1,j,arr,k);
        }
    }
    int binarysearch(int arr[], int n, int k) {
        int i=0,j=n-1;
        int id=solve(i,j,arr,k);
        return id;
    }
};