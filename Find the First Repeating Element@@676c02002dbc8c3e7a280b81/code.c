#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int repeat=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return 1;
        }
        return 0;
    }
    if(repeat){
        printf("%d",i);
    }
    else{
        return -1;
    }
    return 0;
}