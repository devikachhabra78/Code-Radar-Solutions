#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int T;
    scanf("%d\n",&T);
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            break;
        }
        printf("%d",i);
    }
    return 0;
}