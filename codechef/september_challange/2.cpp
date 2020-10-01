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
        for(int i =0 ;i<n;i++){
            int temp;
            cin >> temp;
            if(temp == i+1) arr[i] = 0;
            else arr[i] = 1;
            //cout << arr[i] << '\n';
        }
        int trash;
        for(int i = 1;i<n;i++)
            for(int j=0;j<n;j++)    cin >> trash;
        cout << problem(arr,n) << '\n';
    }
    return 0;
}
int problem(int* arr,int n){
    int prev,count = 0;
    prev = *(arr+1);
    for(int i=2;i<n;i++){
        if(prev != *(arr+i))    count++;
        prev = *(arr+i);
        //cout<<"zz:"<<count<<'\n';
    }
    //cout<<"last:"<<*(arr+n)<<'\n';
    if(*(arr+n-1) == 1)   count++;
    return count;
}
