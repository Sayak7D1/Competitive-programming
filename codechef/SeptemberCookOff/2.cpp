#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    for(t;t>0;t--){
        int k,n;
        cin >>n>>k;
        getchar();
        char memory = getchar();
        int ct = 0;
        int offCount = 1;
        //if(memory =='0')    offCount++;
        vector<int> offBulb;
        for(int i=1;i<n;i++){
            char  state = getchar();
            if(memory==state){
                if(memory=='0') offCount++;
                continue; 
            }
            else{
                if(memory=='0'){
                    //cout<<"xushed";
                    offBulb.push_back(offCount);
                    offCount = 1;
                }
                memory = state;
                ct++;
            }
        }
        //cout<<"count:"<<ct;
        if(memory == '0'){
            offBulb.push_back(offCount);
        }
        if(ct <= k){
            cout<<0<<'\n';
            continue;
        }
        else{
            sort(offBulb.begin(),offBulb.end());
            //for(int i=0;i<offBulb.size();i++)   cout<<offBulb[i];
            int ans=0;
            int rest = ct-k;
            if(rest %2 != 0 ) rest++;
            //cout<<"count:"<<ct;
            for(int i=0;i<rest/2;i++) {ans += offBulb[i];}
            cout<< ans<<'\n';
        }
    }
    return 0;
}
