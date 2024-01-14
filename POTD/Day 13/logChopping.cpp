#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> logs;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            logs.push_back(x);
        }
        int total=0;
        for(int i=0;i<n;i++){
            total+=(logs[i]-1);
        }
        if(total%2==0){
            cout<<"maomao90"<<endl;
        }
        else{
            cout<<"errorgorn"<<endl;
        }
    }
    return 0;
}