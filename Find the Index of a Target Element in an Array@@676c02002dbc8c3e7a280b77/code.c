#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int T;
    scanf("%d\n",&T);
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            printf("%d",i);
            break;
        }
        else{
            return -1;
        }
    }
    return 0;
}