#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        if(n%2!=0){
            for(int i=0;i<n;i++){
                cout<<"1 ";
            }
        }
        else{
            cout<<"1 3 ";
            for(int i=2;i<n;i++){
                cout<<"2 ";
            }
        }
    }    
    return 0;
}
