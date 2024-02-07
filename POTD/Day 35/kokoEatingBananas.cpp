/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

Time Complexity : O(nlogn)
Space Complexity : O(1)
*/
class Solution {
public:
    long long findMax(vector<int>& v){
        long long maxi=INT_MIN;
        for(long long i=0;i<v.size();i++){
            if(v[i]>maxi){
                maxi=v[i];
            }
        }
        return maxi;
    }
    long long calc(vector<int>& v,int h){
        long long th=0,n=v.size();
        for(int i=0;i<v.size();i++){
            th+=ceil((double)v[i]/(double)h);
        }
        return th;
    }
    int minEatingSpeed(vector<int>& v, int h) {
        long long low=1,high=findMax(v);
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long totalH=calc(v,mid);
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};