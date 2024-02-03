/*
A teacher is writing a test with n true/false questions, with 'T' denoting true and 'F' denoting false. 
He wants to confuse the students by maximizing the number of consecutive questions with the same answer (multiple trues or multiple falses in a row).
You are given a string answerKey, where answerKey[i] is the original answer to the ith question. In addition, you are given an integer k, the maximum number of times you may perform the following operation:
Change the answer key for any question to 'T' or 'F' (i.e., set answerKey[i] to 'T' or 'F').

Return the maximum number of consecutive 'T's or 'F's in the answer key after performing the operation at most k times.
Time Complexity : O(N)
Space Complexity : O(1)
*/
class Solution {
public:
    int solve(string s,int k,char c){
        int i=0,j=0,cnt=0,n=s.length(),ans=0;
        while(j<n){
            if(s[j]==c){
                cnt++;
            }
            while(i<n && cnt>k){
                if(s[i]==c){
                    cnt--;
                }
                i++;
            }
            ans=max(j-i+1,ans);
            j++;
        }
        return ans;
    }
    int maxConsecutiveAnswers(string a, int k) {
        int ans1=solve(a,k,'T');
        int ans2=solve(a,k,'F');
        return max(ans1,ans2);
    }
};
