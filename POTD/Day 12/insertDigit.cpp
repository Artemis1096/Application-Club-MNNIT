/*
You have a positive number of length 𝑛 and one additional digit.
You can insert this digit anywhere in the number, including at the beginning or at the end.
Your task is to make the result as large as possible.

Time Complexity : O(n)
Space Complexity : O(n)
where n is string length
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        int len=s.length();
        string c=to_string(d);
        string x;
        int i=0;
        while ((i<len) && (s[i]>=c[0])){   
            // in this loop i am pushing elements greater than equal to the given input value
            x.push_back(s[i]);
            i++;
        }
        x.push_back(c[0]); // pushing given input element in the string
        while(i<len){
            // in this loop i am pushing the rest of the elements
            x.push_back(s[i]);
            i++;
        }
        cout<<x<<endl;
    }
    return 0;
}