/*
Determine the minimum number of characters to remove from the file name so after that the 
name does not contain "xxx" as a substring. 
Print 0 if the file name does not initially contain a forbidden substring "xxx".

Time Complexity : O(N)
Space Complexity : O(N)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int consecutiveX=0,maxConsecutiveX=INT_MIN,ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            consecutiveX++;
            maxConsecutiveX=max(maxConsecutiveX,consecutiveX);
        }
        else{
            consecutiveX=0;
            if(maxConsecutiveX>=3){
                ans+=(maxConsecutiveX-2);
            }
            maxConsecutiveX=0;
        }
    }    
    if(maxConsecutiveX>=3){
        // this is for the last sequence of the string
        ans+=(maxConsecutiveX-2);
    }
    if(ans==0){
        cout<<"0";
        return 0;
    }
    cout<<ans;
    return 0;
}
