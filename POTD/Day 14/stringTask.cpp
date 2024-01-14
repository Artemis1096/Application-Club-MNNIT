#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,x=".";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='A' && s[i]!='E' && s[i]!='Y' && s[i]!='y' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' ){
            x+=tolower(s[i]);
            if(i==(s.length()-1)){
                break;
            }
            x+='.';
        }
    }
    if(s[s.length()-1]=='A' || s[s.length()-1]=='E' || s[s.length()-1]=='Y' || s[s.length()-1]=='y' || s[s.length()-1]=='I' || s[s.length()-1]=='O' || s[s.length()-1]=='U' || s[s.length()-1]=='a' || s[s.length()-1]=='e' || s[s.length()-1]=='i' || s[s.length()-1]=='o' || s[s.length()-1]=='u' ){
        x.pop_back();   
    }
    cout<<x;
    return 0;
}