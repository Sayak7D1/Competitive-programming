#include<bits/stdc++.h>
using namespace std;
void check(int n,int i,int* arr,int* corona,float ti);
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0 ;i<n;i++)   cin >> arr[i];
        int mi = 100,ma = 0;
        for(int i = 0;i<n;i++){
            int corona[n] = {0};
            corona[i] = 1;
            check(n,i,arr,corona,0.0);
            int ct = count(corona,corona+n,1);
            if(ct>ma)  ma = ct;
            if(ct<mi)  mi = ct;
        }
        cout<<mi<<' '<<ma<<'\n';
    }
    return 0;
}
void check(int n,int i,int* arr,int *corona,float ti){
    int num = *(arr+i);
    for(int a=0;a<n;a++){
        //cout<<"check"<<arr[i]<<':'<<arr[a]<<'\n';
        if(a==i)    continue;
        if(arr[i] == arr[a])    continue;
        if(corona[a])   continue;
        float rt = ((float)(a-i)/(float)(arr[i]-arr[a]));
        //cout<<"check"<<arr[i]<<':'<<arr[a]<<"time:"<<rt<<'\n';
        if(rt>0 && rt>=ti){
            corona[a] = 1;
            //cout<<"found\n";
            check(n,a,arr,corona,rt);
        }
    }
}
