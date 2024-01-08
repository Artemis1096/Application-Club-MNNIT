#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        string s,x="abc";
        cin>>s;
        if(s==x){
            cout<<"YES"<<endl;
            continue;
        }
        int p=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){continue;}
                string t=s;
                int temp=t[i];
                t[i]=t[j];
                t[j]=temp;
                if(t==x){
                    p=1;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(p==1){
                break;
            }
        }
        if(p==0){
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}
