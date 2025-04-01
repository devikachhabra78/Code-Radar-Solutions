#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int smin= -1;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            smin = min;
            min = arr[i];
        }
        else if(arr[i]<smin && arr[i]!=min){
            smin = arr[i];
        }

    }
    printf("%d",smin);
    return 0;
}