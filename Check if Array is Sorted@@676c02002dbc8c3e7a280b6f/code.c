#include<stdio.h>
int isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1] || arr[i]==arr[i+1]){
        return 0;
    }
}
    return -1;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    if(isSorted(arr,n)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}