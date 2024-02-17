/*
Calin has 𝑛 buckets, the 𝑖-th of which contains 𝑎𝑖 wooden squares of side length 1
Can Calin build a square using all the given squares?
Time Complexity : O(nlogn)
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_square(long long x) {
    long long l = 1, r = 1e9;
    while(l <= r) {
        long long mid = l + (r - l) / 2;
        if(mid * mid == x) return true;
        if(mid * mid > x) r = mid - 1;
        else l = mid + 1;
    }      
    return false;  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        vector<long long> x;
        long long sum=0;
        for(long long i=0;i<n;i++){
            long long d;
            cin>>d;
            x.push_back(d);
            sum+=d;
        }
        if(is_square(sum)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}