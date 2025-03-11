#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int T;
    int index=-1;
    scanf("%d\n",&T);
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            index =  i;
            break;   
        }
    }
    printf("%d",index);
    return 0;
}