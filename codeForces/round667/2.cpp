#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        long long int a,b,x,y,n;
        unsigned long long int ans1,ans2;
        scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&n); 
        if(n > (a-x)+(b-y))
        {
            cout << x*y << '\n';
    }else{
        if(n <= (a-x)){
            ans1 = (a-n)*b;
        }else{
            ans1 = x*(b-(n-(a-x)));
        }
        if(n <= (b-y)){
            ans2 = (b-n)*a;
        }else{
            ans2 = y*(a-(n-(b-y)));
        }
        if(ans1 < ans2) cout << ans1 << '\n';
        else cout << ans2 << '\n';
        }
    }
    return 0;
}
