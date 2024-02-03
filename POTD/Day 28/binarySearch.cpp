/*
Implementing Binary Search
Time Complexity : O(logn)
Space Complexity : O(1)
*/
int search(int* arr, int numsSize, int target){
    int low=0;
    int high=numsSize-1;
    int mid,x;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(target>arr[mid])
        {
            low=mid+1;
        }
        if(target<arr[mid])
        {
            high=mid-1;
        }
        if(target==arr[mid])
        {
            return mid;
        }
    }
    return -1;
}