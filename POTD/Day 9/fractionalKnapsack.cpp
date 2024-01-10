/*
Given weights and values of N items,
we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
*/
class Solution
{
    static bool comp (Item &a,Item &b){
        double c1 = (double) a.value/a.weight;
        double c2 = (double) b.value/b.weight;
        if(c1>c2) return true;
        return false;
    }
    public:
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double inc=0.0;
        sort(arr,arr+n,comp);
        for(int i=0;i<n;i++){
            if(W==0){break;}
            double value=arr[i].value;
            double weight=arr[i].weight;
            if(weight<=W){
                W-=weight;
                inc+=value;
            }
            else{
                double fraction = static_cast<double>(W) / weight;
                inc += fraction * value;
                W=0;
            }
        }
        return inc;
    }      
};