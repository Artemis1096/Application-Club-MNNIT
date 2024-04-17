// sum of array
// Time Complexity : O(n)
// Space Complexity : O(n)
class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	void solve(int &sum,int i,int n,int arr[]){
	    sum+=arr[i];
	    if(i==n){return;}
	    solve(sum,i+1,n,arr);
	}
	int sum(int arr[], int n) {
	    int sum=0,i=0;
	    solve(sum,i,n-1,arr);
	    return sum;
	}
};