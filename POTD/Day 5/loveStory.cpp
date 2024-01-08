#include <iostream>
using namespace std;
int main()
{
    string s1="codeforces",s2;
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        cin>>s2;
        int count=0;
        for(int i=0;i<s2.length();i++){
            if(s1[i]!=s2[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
