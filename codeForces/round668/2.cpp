#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)    cin >> arr[i];
        int* mx = max_element(arr, arr + n);
        long long int coin = 0;
        while(*mx != 0){
            int* mn = min_element(arr, arr + n);
            //cout<<mx - mn<<'\n';
            if(*mx >= -(*mn)){
                if((mx - mn)>0){cout<<'~';coin += -(*mn);}
                //*mn = 0;
                *mx = *mx + *mn;
                *mn = 0;
                //cout << "fire:" << *mx <<'\n';
                //if(mx > mn) coin += *mx + *mn;
            }else{
                if((mx - mn)>0) {cout<<'+'; coin += (*mx);}
                *mn = *mx + *mn;
                *mx = 0;
                //if(mx > mn) coin += -(*mx + *mn);
            }   
            mx = max_element(arr,arr+n);
            //cout << coin <<'\n';
            //cout << "max:" << *mx<<'\t';
        }
        cout << coin << '\n';
    }
return 0;
}
