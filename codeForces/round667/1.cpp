#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(t;t>0;t--){
        int a,b,ans;
        scanf("%d %d",&a,&b);
        if(a>b){
            int i = a-b;
            if(i%10 == 0){
                ans = (int)(i/10);
            }else{
                ans = (int)(i/10) + 1;
            }
        }else{
            int i = b - a;
            if (i % 10 == 0)
            {
                ans = (int)(i / 10);
            }
            else
            {
                ans = (int)(i / 10) + 1;
            }
        }
        printf("%d\n",ans);
    }
}
