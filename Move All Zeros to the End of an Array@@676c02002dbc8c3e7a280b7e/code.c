#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int zero_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
        int temp = arr[i];
        arr[i]=arr[zero_index];
        arr[zero_index]=temp;
        zero_index++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}