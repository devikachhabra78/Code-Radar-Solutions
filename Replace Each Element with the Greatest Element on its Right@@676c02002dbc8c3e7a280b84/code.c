#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[n-1]=-1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            arr[i] = arr[i+1];
        }
    
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}