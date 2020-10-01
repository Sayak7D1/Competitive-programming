#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        int ans = 1;
        //int array[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            sum += temp;
            //cout << sum;
        }
        if(sum < 0){
            cout << "NO"<<'\n';
        }else cout << "YES"<<'\n';
    }
    return 0;
}
