#include<bits/stdc++.h>
using namespace std;
int problem(int* arr);
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        int arr[101] = {0};
        cin >> n;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            arr[temp] += 1;
        }
        cout << problem(arr)<<'\n';
    }
    return 0;
}
int problem(int* arr){
    int ans1 = 0,ans2 = 0,flag = 1;
    for(int i=0;i<101;i++){
        if(arr[i] == 0) break;
        if(flag){
            if(arr[i] > 1)  ans2 = i+1;
            else    flag = 0;
        }
        ans1 = i+1;
    }
    return ans1+ans2;
}
