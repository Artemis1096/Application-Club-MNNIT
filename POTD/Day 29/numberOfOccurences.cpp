/*
Given a sorted array Arr of size N and a number X, 
you need to find the number of occurrences of X in Arr.
Time Complexity : O(log n)
Space Complexity : O(1)
*/
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int low=0,high=n-1,count=0;
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        if(arr[mid]==x){
	            count++;
	            int left = mid - 1;
                while (left >= 0 && arr[left] == x) {
                    count++;
                    left--;
                }
                int right = mid + 1;
                while (right < n && arr[right] == x) {
                    count++;
                    right++;
                }
                return count;
	        }
	        else if(arr[mid]>x){
	            high=mid-1;
	        }
	        else{
	            low=mid+1;
	        }
	    }
	    return count;
	}
};