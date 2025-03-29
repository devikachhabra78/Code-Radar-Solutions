#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            max = arr[i];
        }
    }
    }
    printf("%d",max);
    return 0;
}