int secondLargest(int *arr,int n)
{
    int lar=-1,sec=-1; //set two variables providing us 2 most biggest values
        for(int i=0; i<n; i++)
        {
            if(arr[i]>lar)
            {
                sec=lar;
                lar=arr[i];
            }
            else if(arr[i]>sec && arr[i]<lar)
            {
                sec=arr[i];
            }
        }
        return sec;
}
