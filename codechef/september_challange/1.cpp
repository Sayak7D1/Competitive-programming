#include<bits/stdc++.h>
using namespace std;
int problem(int* arr,int n);
int main()
{
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << problem(arr,n) << '\n';
    }
    return 0;
}
int problem(int* arr,int n){
    int count = 1;
    for(int i=n-1;i>0;i--){
        //cout << "ch" << *(arr+i)<< '\n';
        if(*(arr+i-1) == 0) break;
        if(*(arr+i)==*(arr-1+i)) continue;
        else count++;
        //cout << count << '\n';
    }
    if(*(arr+n-1) == 0 ) count = 0;
    return count;
}
