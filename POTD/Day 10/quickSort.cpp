class QuickSort{
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high){
            return;
        }
        int p=partition(arr,low,high);
        
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
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