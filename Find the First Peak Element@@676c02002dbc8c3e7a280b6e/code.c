#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pelement=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            pelement=arr[i];
        }

    }
    printf("%d",pelement);
    return 0;
}