#include<bits/stdc++.h>
#include<cmath>
using namespace std;
long long int sum(int n);
float findpos(int n);
int C2(int pos);
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        long long int s = sum(n);
        //cout <<"sum:"<< s <<'\n';
        if(s%2 != 0){
            cout<<0<<'\n';
            continue;
        }
        auto pos = findpos(n);
        //cout << "pos:" <<pos<<'\n';
        if(pos - (int)pos == 0){
            //cout <<" fire:" << n<<'\n';
            cout<<C2((int)pos) + C2((int)(n-pos)) + (n - s/2 + sum((int)(pos-1))) <<'\n';
            continue;
        }
        cout << n - s/2 + sum((int)pos)<<'\n';
    }
return 0;
}
long long int sum(int n){
    return n*(n+1)/2;
}
float findpos(int n){
    long long int sq;
    sq = 2*n*(n+1) + 1;
    //cout << "sq:" << sq <<'\n';
    return (sqrt(sq) - 1)/2;
}
int C2(int n){
    if(n<2) return 0;
    return n*(n-1)/2;
}
