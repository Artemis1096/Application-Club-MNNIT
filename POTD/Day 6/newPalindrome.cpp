#include <iostream>
#include <map>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.length()/2;i++){
            mp[s[i]]++;
        }
        if(mp.size()<=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
