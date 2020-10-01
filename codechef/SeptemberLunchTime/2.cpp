#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        int flag = 1;
        for(int i=1;i<=n;i++){
            int temp;
            cin >> temp;
            if(i % temp != 0){
                flag = 0;
                break;
            } 
        }
        if(flag)    cout<<"YES"<<'\n';
        else    cout<<"NO"<<'\n';
    }
    return 0;
}
