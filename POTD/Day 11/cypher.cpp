/*
Luca has a cypher made up of a sequence of 𝑛 wheels, each with a digit 𝑎𝑖 written on it. On the 𝑖-th wheel, 
he made 𝑏𝑖 moves. Each move is one of two types:
up move (denoted by 𝚄): it increases the 𝑖-th digit by 1. After applying the up move on 9, it becomes 0
.down move (denoted by 𝙳): it decreases the 𝑖-th digit by 1. After applying the down move on 0, it becomes 9. 

Time Complexity : O(n*m)
Space Complexity : O(n+m)
where n is lock size and m is length of operations performed

*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> cipher(n);
        for(int i=0;i<n;i++){
            cin>>cipher[i];
        }
        vector<pair<int,string> > op;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            string s;
            cin>>s;
            pair<int,string> st;
            st.first=p;
            st.second=s;
            op.push_back(st);
        }
        for (int i = 0; i < n; i++)
        {
            string s=op[i].second;
            for(int j=0;j<s.length();j++){
                if(s[j]=='D'){
                    if(cipher[i]==9){
                        cipher[i]=0;
                        continue;
                    }
                    cipher[i]++;
                }
                else{
                    if(cipher[i]==0){
                        cipher[i]=9;
                        continue;
                    }
                    cipher[i]--;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<cipher[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
