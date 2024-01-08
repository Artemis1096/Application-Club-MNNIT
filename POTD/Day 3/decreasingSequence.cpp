// A sequence a[0], a[1], …, a[N-1] is called decreasing if a[i] >= a[i+1] for each i: 0 <= i < N-1. 
// You are given a sequence of numbers a[0], a[1],…, a[N-1] and a positive integer K. 
// In each 'operation', you may subtract K from any element of the sequence. 
// You are required to find the minimum number of 'operations' to make the given sequence decreasing.
int minMoves(int a[], int n, int k)
{
    int c=0;
    for(int i=1;i<n;i++){
         if(a[i]>a[i-1])
        {
            int change=((a[i]-a[i-1]-1)/k)+1;
            c+=change;
            c=c%1000000007;
            a[i]=a[i]-k*change;
        }
    }
    return c%1000000007;
}