#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int zero_index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[zero_index]=arr[i];
            zero_index++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}