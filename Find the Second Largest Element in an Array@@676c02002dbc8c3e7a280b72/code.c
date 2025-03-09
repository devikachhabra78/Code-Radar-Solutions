#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n<2){
        printf("-1");
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[0] == arr[i]){
            return -1;
        }
    }
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smax > max){
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && max!=arr[i]){
            smax = arr[i];
        }  
    }
    printf("%d",smax);
    return 0;
}