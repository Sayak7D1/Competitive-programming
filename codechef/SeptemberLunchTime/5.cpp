#include<iostream>
using namespace std;
int inversions(int* arr,int n);
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)    cin >> arr[i];
        if(n<=2) cout<<"YES\n";
        else{
            if(inversions(arr,n)  == 2)   cout<<"NO\n";
            //else if(inversions(arr,n) < 2) cout<<"YES\n";
            else    cout<<"YES\n";
        }
    }
}
int inversions(int* arr,int n){
    int ct = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]) ct++;
        }
    }
    return ct;
}

