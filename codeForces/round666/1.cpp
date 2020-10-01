/*
Sayak Das
*/
#include <iostream>
#include<stdio.h>
using namespace std;
void count_alb(int* arr,char c);
int main(){
    int t;
    scanf("%d",&t);
    for(t;t>0;t--){
        int n;
        int arr[26] = {0};
        scanf("%d",&n);
        getchar();
        for(int i = 0;i<n;i++){
            for(char c = getchar();c!='\n';c=getchar()){
                count_alb(arr,c);
            }
        }
        int flag = 1;
        for(int i=0;i<26;i++){
            if(arr[i] % n != 0){
                flag = 0;
            }
        }
        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
void count_alb(int *arr, char c){
    int pos = (int)c - (int)'a';
    *(arr+pos) += 1;
}
