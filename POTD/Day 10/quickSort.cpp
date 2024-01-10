/* basically the idea is to select an element(pivot) and put it into its right place
    then make its right and left partitions in a way such that the left side contains
    elements less than the pivot and right side greater than the pivot
*/
class QuickSort{
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high){
            return;
        }
        int p=partition(arr,low,high);
        
        quickSort(arr,low,p-1); // left partition

        quickSort(arr,p+1,high); // right partition
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int c=0;
       for(int i= low+1;i<=high;i++){
           if(pivot>=arr[i]){
               c++;
           }
       }
       swap(arr[low],arr[low+c]);
       int i=low,j=high;
       int pidx=low+c;
       while(i<pidx && j>pidx){
           while(arr[i]>=pivot){i++;}
           while(arr[j]<pivot){j--;}
           if(i<pidx && j>pidx){
               swap(arr[i],arr[j]);
               i++;j--;
           }
       }
    }