#include<stdio.h>
int main(){
    int n,K;
    scanf("%d %d\n",&n,&K);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>K){
            count++;

        }
    }
    printf("%d",count);

    return 0;
}