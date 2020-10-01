#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int r,c;
        cin >> r;
        cin >> c;
        int flag = 1;
        cout<<'R';
        for(int y=1;y<=c;y++){
            cout<<'U';
            if(flag == 1){
                for(int x=1;x<r;x++)    cout<<'R';
                flag *= -1;
            }else{
                for(int x=1;x<r;x++)    cout<<'L';
                flag *= -1;
            }

        }
    cout<<'\n';
    }
    return 0;
}
