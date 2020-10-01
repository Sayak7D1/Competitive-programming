#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n,k,l;
        cin >>n >>k >>l;
        if(n!=1&&k==1){
            cout<<-1<<'\n';
            continue;
        }
        if((float)((float)n/(float)k) > l){
            cout<<-1<<'\n';
            continue;
        }
        int over=n;
        int player=1;
        while(over!=0){
            cout<<player++<<' ';
            if(player>k)    player=1;
            over--;
        }
        cout<<'\n';
    }
    return 0;
}
