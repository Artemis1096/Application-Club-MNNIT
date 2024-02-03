/*
The k-beauty of an integer num is defined as the number of substrings of num when it is read as a string that meet the following conditions:
    It has a length of k.
    It is a divisor of num.
Given integers num and k, return the k-beauty of num.

Note:
    Leading zeros are allowed.
    0 is not a divisor of any value.
A substring is a contiguous sequence of characters in a string.
Time Complexity : O(n)
Space Complexity : O(n)

*/
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string x=to_string(num),s="";
        int i=0,j=0,n=x.length(),c=0;
        while(j<n){
            s+=x[j];
            if((j-i+1)<k){
                j++;
            }
            else if((j-i+1)==k){
                int no=stoi(s);
                if(no!=0 && num%no==0){
                    c++;
                }
                i++;
                j++;
                s.erase(s.begin());
            }
        }
        return c;
    }
};